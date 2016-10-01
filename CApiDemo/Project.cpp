#include "Project.h"
#include "Entity.h"
#include "Metric.h"
#include "Util.h"
#include <cassert>

Project::Project(string filename)
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
		case Udb_statusDBChanged:
			printf("database has been changed\n");                break;
		case Udb_statusDBCorrupt:
			printf("database is corrupt\n");                      break;
		case Udb_statusDBOldVersion:
			printf("database is old version\n");                  break;
		case Udb_statusDBUnknownVersion:
			printf("unknown version\n");                          break;
		case Udb_statusDBUnableOpen:
			printf("unable to locate file\n");                    break;
		case Udb_statusNoApiLicense:
			printf("no Understand license available\n");          break;
		case Udb_statusNoApiLicenseAda:
			printf("no Understand Ada license available\n");      break;
		case Udb_statusNoApiLicenseC:
			printf("no Understand C license available\n");        break;
		case Udb_statusNoApiLicenseFtn:
			printf("no Undertstand Fortran license available\n"); break;
		case Udb_statusNoApiLicenseJava:
			printf("no Understand Java license available\n");     break;
		case Udb_statusNoApiLicenseJovial:
			printf("no Understand Jovial license available\n");   break;
		case Udb_statusNoApiLicensePascal:
			printf("no Understand Pascal license available\n");   break;
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

string Project::GetName() const
{
	assert(_isOpen);

	return udbDbName();}

string Project::GetBuild() const
{
	assert(_isOpen);

	return udbInfoBuild();}

list<Entity*> Project::GetFiles() const
{
	assert(_isOpen);

	list<Entity*> entities;

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

list<Entity*> Project::GetEntities() const
{
	assert(_isOpen);

	list<Entity*> entities;

	UdbEntity *ents;
	int entsSize;
	udbListEntity(&ents, &entsSize);

	for (int i = 0; i < entsSize; i++) {
		Entity* pEntity = new Entity(ents[i], udbEntityLanguage(ents[i]));
		entities.push_back(pEntity);
	}

	udbListEntityFree(ents);

	return entities;
}

list<Metric*> Project::GetMetrics() const
{
	assert(_isOpen);

	list<Metric*> projectMetrics;

	UdbMetric *metrics;
	int size = udbMetricListProject(udbDbLanguage(), &metrics);

	for (int i = 0; i < size; i++)
	{
		double value = udbMetricValueProject(metrics[i]);

		projectMetrics.push_back(new Metric(metrics[i], value));
	}

	return projectMetrics;
}