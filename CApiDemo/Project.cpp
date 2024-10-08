#include "Project.h"
#include "Entity.h"
#include "Metric.h"
#include "Util.h"
#include <cassert>

Project::Project(std::string filename)
{
	_filename = filename;
	_isOpen = false;
}

Project::~Project()
{
}

bool Project::Open()
{
	UdbStatus status = udbDbOpen(_filename.c_str());

	if (status != Udb_statusOkay) {
		switch (status) {
		case Udb_statusDBAlreadyOpen:
			printf("database already open\n");                    break;
		case Udb_statusDBOldVersion:
			printf("database is old version\n");                  break;
		case Udb_statusDBUnknownVersion:
			printf("unknown version\n");                          break;
		case Udb_statusDBUnableOpen:
			printf("unable to locate file\n");                    break;
		case Udb_statusNoApiLicense:
			printf("no Understand license available\n");          break;
		default:
			printf("unable to access database\n");                break;
		}
	}
	_isOpen = (status == Udb_statusOkay);
	return _isOpen;
}

void Project::Close()
{
	assert(_isOpen);

	udbDbClose();

	_isOpen = false;
}

Language Project::GetLanguage() const
{
	assert(_isOpen);

	return Util::GetLanguage(udbDbLanguage());
}

std::string Project::GetName() const
{
	assert(_isOpen);

	return udbDbName();
}

std::string Project::GetBuild() const
{
	assert(_isOpen);

	return udbInfoBuild();
}

std::list<Entity*> Project::GetFiles() const
{
	assert(_isOpen);

	std::list<Entity*> entities;

	UdbEntity *ents;
	int entsSize;
	udbListFile(&ents, &entsSize);

	for (int i = 0; i < entsSize; i++) {
		Entity* pEntity = new Entity(ents[i], udbEntityLanguage(ents[i]));
		entities.push_back(pEntity);
	}

	udbListEntityFree(ents);

	return entities;
}

std::list<Entity*> Project::GetEntities() const
{
	assert(_isOpen);

	std::list<Entity*> entities;

	UdbEntity *ents;
	int entsSize;
	udbListEntity("",  & ents, &entsSize);

	for (int i = 0; i < entsSize; i++) {
		Entity* pEntity = new Entity(ents[i], udbEntityLanguage(ents[i]));
		entities.push_back(pEntity);
	}

	udbListEntityFree(ents);

	return entities;
}

std::list<Metric*> Project::GetMetrics() const
{
	assert(_isOpen);

	std::list<Metric*> projectMetrics;

	UdbMetric *metrics;
	int size = udbMetricListProject(udbDbLanguage(), &metrics);

	for (int i = 0; i < size; i++)
	{
		double value = udbMetricValueProject(metrics[i]);

		projectMetrics.push_back(new Metric(metrics[i], value));
	}

	return projectMetrics;
}