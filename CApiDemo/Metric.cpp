#include "Metric.h"

Metric::Metric(UdbMetric udbMetric, double value)
{
	_name = udbMetricName(udbMetric);
	_description = udbMetricDescription(udbMetric);
	_isInteger = udbMetricKind(udbMetric) == Udb_mkind_Integer;
	_value = value;
}

Metric::~Metric()
{
}

std::string Metric::GetName() const
{
	return _name;
}

std::string Metric::GetDescription() const
{
	return _description;
}

bool Metric::IsInteger() const
{
	return _isInteger;
}

double Metric::GetValue() const
{
	return _value;
}