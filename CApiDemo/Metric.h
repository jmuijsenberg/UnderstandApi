#pragma once
#include <string>

#include "udb.h"

using namespace std;

class Metric
{
private:
	string _name;
	string _description;
	bool _isInteger;
	double _value;
public:
	Metric(UdbMetric udbMetric, double value);
	~Metric();

	string GetName() const;
	string GetDescription() const;
	bool IsInteger() const;
	double GetValue() const;
};

