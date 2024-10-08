#include "Reference.h"

Reference::Reference(UdbEntity sourceEntity, UdbReference udbReference, UdbLanguage udbLanguage)
{
	_sourceEntityId = udbEntityId(sourceEntity);
	_sourceEntityName = udbEntityNameShort(sourceEntity);
	_sourceEntityKindName = udbKindLongname(udbEntityKind(sourceEntity));

	_targetEntityId = udbEntityId(udbReferenceEntity(udbReference));
	_targetEntityName = udbEntityNameShort(udbReferenceEntity(udbReference));
	_targetEntityKindName = udbKindLongname(udbEntityKind(udbReferenceEntity(udbReference)));

	_kindText = udbKindLongname(udbReferenceKind(udbReference));

	_kind = OtherReferenceKind;
	_file = udbEntityNameLong(udbReferenceFile(udbReference));
	_line = udbReferenceLine(udbReference);
	_column = udbReferenceColumn(udbReference);
}

Reference::~Reference()
{

}

int Reference::GetSourceEntityId() const
{
	return _sourceEntityId;
}

std::string Reference::GetSourceEntityName() const
{
	return _sourceEntityName;
}

std::string Reference::GetSourceEntityKindName() const
{
	return _sourceEntityKindName;
}

int Reference::GetTargetEntityId() const
{
	return _targetEntityId;
}

std::string Reference::GetTargetEntityName() const
{
	return _targetEntityName;
}

std::string Reference::GetTargetEntityKindName() const
{
	return _targetEntityKindName;
}

ReferenceKind Reference::GetKind() const
{
	return _kind;
}

std::string Reference::GetFile() const
{
	return _file;
}

int Reference::GetLine() const
{
	return _line;
}

int Reference::GetColumn() const
{
	return _column;
}

std::string Reference::GetKindText() const
{
	return _kindText;
}