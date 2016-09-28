#pragma once

#include <string>

class StringComparer
{
private:
	std::string _text;
public:
	StringComparer(std::string text);
	~StringComparer();

	bool ContainsText(std::string substring) const;
};

