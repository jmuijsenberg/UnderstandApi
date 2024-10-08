#include "Entity.h"
#include "Reference.h"
#include "Metric.h"
#include "Util.h"

Entity::Entity(UdbEntity udbEntity, UdbLanguage udbLanguage)
{
	_id = udbEntityId(udbEntity);
	_name = udbEntityNameShort(udbEntity);
	_type = udbEntityTypetext(udbEntity);
	_namespace = udbEntityNameLong(udbEntity);

	_kindText = udbKindLongname(udbEntityKind(udbEntity));

	_scope = OtherScope;
	_kind = OtherEntityKind;
	_language = Util::GetLanguage(udbLanguage);

	UdbReference *refs;
	int refsSize;
	udbListReference(udbEntity, &refs, &refsSize);
	for (int i = 0; i < refsSize; i++) {
		Reference* pReference = new Reference(udbEntity, refs[i], udbLanguage);
		_references.push_back(pReference);
	}

	udbListReferenceFree(refs);

	_comment = udbComment(udbEntity, Udb_commentStyleBefore, Udb_commentFormatDefault, nullptr);

	UdbMetric *metrics;
	int size = udbMetricListEntity(udbEntity, &metrics);

	for (int j = 0; j < size; j++)
	{
		double value = udbMetricValue(udbEntity, metrics[j]);
		_metrics.push_back(new Metric(metrics[j], value));
	}}

Entity::~Entity()
{
}

int Entity::GetId() const
{
	return _id;
}

std::string Entity::GetNamespace() const
{
	return _namespace;
}

std::string Entity::GetName() const
{
	return _name;
}

std::string Entity::GetType() const
{
	return _type;
}

Scope Entity::GetScope() const
{
	return _scope;
}

EntityKind Entity::GetKind() const
{
	return _kind;
}

Language Entity::GetLanguage() const
{
	return _language;
}

std::list<Reference*> Entity::GetReferences() const
{
	return _references;
}

std::list<Metric*> Entity::GetMetrics() const
{
	return _metrics;
}

std::string Entity::GetComment() const
{
	return _comment;
}

std::string Entity::GetKindText() const
{
	return _kindText;
}
