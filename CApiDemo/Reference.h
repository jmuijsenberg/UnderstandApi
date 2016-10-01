#pragma once

#include "udb.h" 

#include "Entity.h"
#include "ReferenceKind.h"

using namespace std;

class Reference
{
private:
	int _sourceEntityId;
	string _sourceEntityName;
	string _sourceEntityKindName;
	int _targetEntityId;
	string _targetEntityName;
	string _targetEntityKindName;
	ReferenceKind _kind;
	string _file;
	int _line;
	int _column;
	string _kindText;
public:
	Reference(UdbEntity sourceEntity, UdbReference udbReference, UdbLanguage udbLanguage);
	~Reference();

	int GetSourceEntityId() const;
	string GetSourceEntityName() const;
	string GetSourceEntityKindName() const;
	int GetTargetEntityId() const;
	string GetTargetEntityName() const;
	string GetTargetEntityKindName() const;
	ReferenceKind GetKind() const;
	string GetFile() const;
	int GetLine() const;
	int GetColumn() const;
	string GetKindText() const;
};

