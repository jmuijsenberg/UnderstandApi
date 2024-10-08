#pragma once

#include <string>

class stringComparer
{
private:
	std::string _text;
public:
	stringComparer(std::string text);
	~stringComparer();

	bool ContainsText(std::string substring) const;
};

