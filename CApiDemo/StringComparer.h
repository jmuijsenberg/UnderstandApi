#pragma once

#include <string>

using namespace std;

class StringComparer
{
private:
	string _text;
public:
	StringComparer(string text);
	~StringComparer();

	bool ContainsText(string substring) const;
};

