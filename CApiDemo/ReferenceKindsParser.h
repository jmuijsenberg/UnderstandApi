#pragma once

#include <string>

#include "udb.h"

#include "ReferenceKind.h"

class ReferenceKindsParser
{
	ReferenceKind __referencKind;
public:
	ReferenceKindsParser(std::string kind, UdbLanguage udbLanguage);
	~ReferenceKindsParser();
private:
	void ParseCppKinds(std::string kind);
	void ParseCSharpKinds(std::string kind);
	void ParseJavaKinds(std::string kind);
};

