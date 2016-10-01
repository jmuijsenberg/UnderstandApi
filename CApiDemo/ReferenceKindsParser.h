#pragma once

#include <string>

#include "udb.h"

#include "ReferenceKind.h"

using namespace std;

class ReferenceKindsParser
{
	ReferenceKind __referencKind;
public:
	ReferenceKindsParser(string kind, UdbLanguage udbLanguage);
	~ReferenceKindsParser();
private:
	void ParseCppKinds(string kind);
	void ParseCSharpKinds(string kind);
	void ParseJavaKinds(string kind);
};

