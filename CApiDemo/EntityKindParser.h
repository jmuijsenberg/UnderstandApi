#pragma once

#include <string>
#include "udb.h"
#include "Scope.h"
#include "EntityKind.h"

class EntityKindParser
{
private:
	Scope _scope;
	EntityKind _entityKind;
public:
	EntityKindParser(std::string kind, UdbLanguage udbLanguage);
	~EntityKindParser();
private:
	void ParseCppKinds(std::string kind);
	void ParseCSharpKinds(std::string kind);
	void ParseJavaKinds(std::string kind);
};

