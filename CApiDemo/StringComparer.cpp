#include "stringComparer.h"



stringComparer::stringComparer(std::string text)
{
	_text = text;
}

stringComparer::~stringComparer()
{
}

bool stringComparer::ContainsText(std::string substring) const
{
	return (_text.find(substring) != std::string::npos);
}
