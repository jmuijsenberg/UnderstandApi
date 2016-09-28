#pragma once

#include <list>

#include "udb.h" 
#include "Scope.h" 
#include "EntityKind.h"
#include "Language.h"

class Reference;
class Metric;

class Entity
{
private:
	int _id;
	std::string _namespace;
	std::string _name;
	std::string _type;
	Scope _scope;
	EntityKind _kind;
	Language _language;
	std::list<Reference*> _references;
	std::list<Metric*> _metrics;
	std::string _comment;
	std::string _library;
	std::string _kindText;
public:
	Entity(UdbEntity udbEntity, UdbLanguage udbLanguage);
	~Entity();

	int GetId() const;
	std::string GetNamespace() const;
	std::string GetName() const;
	std::string GetType() const;
	Scope GetScope() const;
	EntityKind GetKind() const;
	Language GetLanguage() const;
	std::list<Reference*> GetReferences() const;
	std::list<Metric*> GetMetrics() const;
	std::string GetComment() const;
	std::string GetLibrary() const;
	std::string GetKindText() const;
};