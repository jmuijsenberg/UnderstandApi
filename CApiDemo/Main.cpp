#include <stdio.h> 
#include "udb.h" 
#include "Project.h"
#include "Entity.h"
#include "Reference.h"
#include "Metric.h"

static char  *dbFilename = "D:\\CSharpModel.udb";

void ListEntityKinds()
{
	int size;
	UdbKind* entityKinds;

	udbListKindEntity(&entityKinds, &size);
	printf("All Entity Kinds : \n");
	for (int i = 0; i < size; i++) {
		printf(" %s\n", udbKindLongname(entityKinds[i]));
	}
	udbListKindFree(entityKinds);
}

void ListReferenceKinds()
{
	int size;
	UdbKind* referenceKinds;

	udbListKindReference(&referenceKinds, &size);
	printf("All Reference Kinds : \n");
	for (int i = 0; i < size; i++) {
		printf(" %s\n", udbKindLongname(referenceKinds[i]));
	}
	udbListKindFree(referenceKinds);
}

int main(int argc, char *argv[]) {

	Project project(dbFilename);
	if (project.Open())
	{
		//ListEntityKinds();
		//ListReferenceKinds();

		std::list<Entity*> entities = project.GetEntities();

		for (std::list<Entity*>::iterator eit = entities.begin(); eit != entities.end(); ++eit)
		{
			Entity* pEntity = *eit;

			printf("  ===================================================\n");
			printf("id = %i\n", pEntity->GetId());
			printf("name = %s\n", pEntity->GetName().c_str());
			printf("type = %s\n", pEntity->GetType().c_str());
			printf("kind = %s\n", pEntity->GetKindText().c_str());
			std::list<Reference*> references = pEntity->GetReferences();

			for (std::list<Reference*>::iterator rit = references.begin(); rit != references.end(); ++rit)
			{
				Reference* pReference = *rit;

				printf("  ===================================================\n");
				printf("  target id = %i\n", pReference->GetTargetEntityId());
				printf("  ref kind = %s\n", pReference->GetKindText().c_str());
				printf("  ref file = %s\n", pReference->GetFile().c_str());
				printf("  ref line = %i\n", pReference->GetLine());
				printf("  ref col = %i\n", pReference->GetColumn());
			}

			std::list<Metric*> entityMetrics = pEntity->GetMetrics();
			for (std::list<Metric*>::iterator mit = entityMetrics.begin(); mit != entityMetrics.end(); ++mit)
			{
				Metric* pMetric = *mit;

				printf("  ===================================================\n");
				printf("  entity metric name = %s\n", pMetric->GetName().c_str());
				printf("  entity metric description = %s\n", pMetric->GetDescription().c_str());
				printf("  entity metric is integer = %d\n", pMetric->IsInteger());
				printf("  entity metric value = %f\n", pMetric->GetValue());
			}
		}

		std::list<Metric*> projectMetrics = project.GetMetrics();

		for (std::list<Metric*>::iterator it = projectMetrics.begin(); it != projectMetrics.end(); ++it)
		{
			Metric* pMetric = *it;

			printf("  ===================================================\n");
			printf("  project metric name = %s\n", pMetric->GetName().c_str());
			printf("  project metric description = %s\n", pMetric->GetDescription().c_str());
			printf("  project metric is integer = %d\n", pMetric->IsInteger());
			printf("  project metric value = %f\n", pMetric->GetValue());
		}
		
		project.Close();
	}
}







