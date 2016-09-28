#include "StringComparer.h"



StringComparer::StringComparer(std::string text)
{
	_text = text;
}

StringComparer::~StringComparer()
{
}

bool StringComparer::ContainsText(std::string substring) const
{
	return (_text.find(substring) != std::string::npos);
}
