#pragma once

#include <string>

#include <list>

#include "udb.h" 
#include "Scope.h" 
#include "EntityKind.h"
#include "Language.h"

using namespace std;

class Reference;
class Metric;

class Entity
{
private:
	int _id;
	string _namespace;
	string _name;
	string _type;
	Scope _scope;
	EntityKind _kind;
	Language _language;
	list<Reference*> _references;
	list<Metric*> _metrics;
	string _comment;
	string _kindText;
public:
	Entity(UdbEntity udbEntity, UdbLanguage udbLanguage);
	~Entity();

	int GetId() const;
	string GetNamespace() const;
	string GetName() const;
	string GetType() const;
	Scope GetScope() const;
	EntityKind GetKind() const;
	Language GetLanguage() const;
	list<Reference*> GetReferences() const;
	list<Metric*> GetMetrics() const;
	string GetComment() const;
	string GetKindText() const;
};