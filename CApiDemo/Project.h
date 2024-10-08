#pragma once

#include <string>
#include <list>
#include "Language.h"

class Entity;
class References;
class Metric;

class Project
{
private:
	std::string _filename;
	bool _isOpen;
public:
	Project(std::string filename);
	~Project();

	bool Open();
	void Close();

	Language GetLanguage() const;
	std::string GetName() const;
	std::string GetBuild() const;
	std::list<Entity*> GetFiles() const;
	std::list<Entity*> GetEntities() const;
	std::list<Metric*> GetMetrics() const;
};

