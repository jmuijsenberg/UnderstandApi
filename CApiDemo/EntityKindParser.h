#pragma once

#include <string>
#include "udb.h"
#include "Scope.h"
#include "EntityKind.h"

using namespace std;

class EntityKindParser
{
private:
	Scope _scope;
	EntityKind _entityKind;
public:
	EntityKindParser(string kind, UdbLanguage udbLanguage);
	~EntityKindParser();
private:
	void ParseCppKinds(string kind);
	void ParseCSharpKinds(string kind);
	void ParseJavaKinds(string kind);
};

