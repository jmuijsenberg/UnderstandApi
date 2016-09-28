#pragma once
#include <string>

#include "udb.h"

class Metric
{
private:
	std::string _name;
	std::string _description;
	bool _isInteger;
	double _value;
public:
	Metric(UdbMetric udbMetric, double value);
	~Metric();

	std::string GetName() const;
	std::string GetDescription() const;
	bool IsInteger() const;
	double GetValue() const;
};

