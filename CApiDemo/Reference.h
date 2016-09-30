#pragma once

#include "udb.h" 
#include "Entity.h"
#include "ReferenceKind.h"

 class Reference
{
private:
	int _sourceEntityId;
	int _targetEntityId;
	std::string _targetEntityName;
	std::string _targetEntityKindName;
	ReferenceKind _kind;
	std::string _file;
	int _line;
	int _column;
	std::string _kindText;
public:
	Reference(int sourceEntityId, UdbReference udbReference, UdbLanguage udbLanguage);
	~Reference();

	int GetSourceEntityId() const;
	int GetTargetEntityId() const;
	std::string GetTargetEntityName() const;
	std::string GetTargetEntityKindName() const;
	ReferenceKind GetKind() const;
	std::string GetFile() const;
	int GetLine() const;
	int GetColumn() const;
	std::string GetKindText() const;
};

