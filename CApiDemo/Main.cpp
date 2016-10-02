#include <fstream>
#include <iostream>

#include "udb.h" 

#include "Project.h"
#include "Entity.h"
#include "Reference.h"
#include "Metric.h"

using namespace std;

void ShowError(string error)
{
	cout << "Error: " << error << "\n";
	
	cout << "Command line usage\n";
	cout << " CAiDemo <understandfilename> -listEntityKinds -f <outputfile> - Lists types of entities supported\n";
	cout << " CAiDemo <understandfilename> -listReferenceKinds -f <outputfile> - Lists types of references supported\n";
	cout << " CAiDemo <understandfilename> -listEntities -f <outputfile> - Lists entities inclduing references and metrics\n";
	cout << " CAiDemo <understandfilename> -listProjectMetrics -f <outputfile> - Lists project metrics\n";
}

void ListEntityKinds(Project project, string outputFilename)
{
	ofstream outputFile;
	outputFile.open(outputFilename);

	outputFile << "<EntityKinds>\n";

	int size;
	UdbKind* entityKinds;
	udbListKindEntity(&entityKinds, &size);

	for (int i = 0; i < size; i++) {
		outputFile << "  <EntityKind id=\"" << entityKinds[i] << 
			                     "\" name=\"" << udbKindLongname(entityKinds[i]) << 
			                     "\"/>";
	}

	udbListKindFree(entityKinds);

	outputFile << "</EntityKinds>\n";

	outputFile.close();
}

void ListReferenceKinds(Project project, string outputFilename)
{
	ofstream outputFile;
	outputFile.open(outputFilename);

	outputFile << "<ReferenceKinds>\n";

	int size;
	UdbKind* referenceKinds;
	udbListKindReference(&referenceKinds, &size);

	for (int i = 0; i < size; i++) {
		outputFile << "  <EntityKind id=\"" << referenceKinds[i] << 
			                     "\" name=\"" << udbKindLongname(referenceKinds[i]) << 
			                     "\"/>";
	}
	
	udbListKindFree(referenceKinds);

	outputFile << "</ReferenceKinds>\n";

	outputFile.close();
}

void ListProjectMetrics(Project project, string outputFilename)
{
	ofstream outputFile;
	outputFile.open(outputFilename);

	outputFile << "<ProjectMetrics>\n";

	list<Metric*> projectMetrics = project.GetMetrics();
	for (list<Metric*>::iterator it = projectMetrics.begin(); it != projectMetrics.end(); ++it)
	{
		Metric* pMetric = *it;
		string valueType = pMetric->IsInteger() ? "Integer" : "Double";

		outputFile << "  <ProjectMetric name=\"" << pMetric->GetName() << 
			                        "\" type=\"" << valueType << 
			                        "\" value=\"" << pMetric->GetValue() << 
			                        "\"/>";

		delete pMetric;
	}

	outputFile << "</ProjectMetrics>\n";

	outputFile.close();
}

void ListEntities(Project project, string outputFilename)
{
	ofstream outputFile;
	outputFile.open(outputFilename);

	outputFile << "<Entities>\n";

	list<Entity*> entities = project.GetEntities();
	for (list<Entity*>::iterator eit = entities.begin(); eit != entities.end(); ++eit)
	{
		Entity* pEntity = *eit;

		outputFile << "  <Entity name= \"" << pEntity->GetId() <<
			                 "\" name=\"" << pEntity->GetName() <<
			                 "\" type=\"" << pEntity->GetType() <<
			                 "\" kind=\"" << pEntity->GetKindText() << 
			                 "\">\n";

		outputFile << "    <References>\n";
		list<Reference*> references = pEntity->GetReferences();
		for (list<Reference*>::iterator rit = references.begin(); rit != references.end(); ++rit)
		{
			Reference* pReference = *rit;

			outputFile << "      <Reference kind= \"" << pReference->GetKindText() <<
				                        //"\" file=\"" << pReference->GetFile() <<
				                        //"\" line=\"" << pReference->GetLine() <<
				                        //"\" column=\"" << pReference->GetColumn() << 
				                        "\">\n";

			outputFile << "        <Target id=\"" << pReference->GetTargetEntityId() <<
				                       "\" name=\"" << pReference->GetTargetEntityName() <<
				                       "\" kind=\"" << pReference->GetTargetEntityKindName() << 
				                       "\"/>\n";
			outputFile << "      </Reference>\n";

			delete pReference;
		}
		outputFile << "    </References>\n";

		//outputFile << "    <Metrics>\n";
		//list<Metric*> entityMetrics = pEntity->GetMetrics();
		//for (list<Metric*>::iterator mit = entityMetrics.begin(); mit != entityMetrics.end(); ++mit)
		//{
		//	Metric* pMetric = *mit;
		//  outputFile << "  <ProjectMetric name=\"" << pMetric->GetName() <<
		//	"\" type=\"" << valueType <<
		//	"\" value=\"" << pMetric->GetValue() << "\"/>";
		//
		//	delete pMetric;
		//}
		//outputFile << "    </Metrics>\n";

		outputFile << "  </Entity>\n";
		delete pEntity;
	}

	outputFile << "</Entities>\n";

	outputFile.close();
}

int main(int argc, char *argv[]) {

	if (argc < 2)
	{
		ShowError("No understand file provided");
	}
	else if (argc == 2)
	{
		ShowError("No options provided");
	}
	else if (argc == 3 || argc ==4)
	{
		ShowError("No or incorrect output file provided");
	}
	else
	{
		string dbFilename = argv[1];
		string options = argv[2];
		string outputFilename = argv[4];

		Project project(dbFilename);
		if (project.Open())
		{
			if (options == "-listEntityKinds")
			{
				ListEntityKinds(project, outputFilename);
			}
			else if(options == "-listReferenceKinds")
			{
				ListReferenceKinds(project, outputFilename);
			}
			else if (options == "-listEntities")
			{
				ListEntities(project, outputFilename);
			}
			else if (options == "-listProjectMetrics")
			{
				ListProjectMetrics(project, outputFilename);
			}
			else
			{
				ShowError("Unknown option provided");
			}

			project.Close();
		}
	}
}







