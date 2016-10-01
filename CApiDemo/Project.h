#pragma once

#include <list>
#include "Language.h"

using namespace std;

class Entity;
class References;
class Metric;

class Project
{
private:
	string _filename;
	bool _isOpen;
public:
	Project(string filename);
	~Project();

	bool Open();
	void Close();

	Language GetLanguage() const;
	string GetName() const;
	string GetBuild() const;
	list<Entity*> GetFiles() const;
	list<Entity*> GetEntities() const;
	list<Metric*> GetMetrics() const;
};

