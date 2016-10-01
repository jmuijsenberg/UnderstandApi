#include "StringComparer.h"



StringComparer::StringComparer(string text)
{
	_text = text;
}

StringComparer::~StringComparer()
{
}

bool StringComparer::ContainsText(string substring) const
{
	return (_text.find(substring) != string::npos);
}
