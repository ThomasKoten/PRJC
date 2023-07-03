#include "Text.h"
#include <iostream>
#include <cstring>

void Text::display()
{
	std::cout << "String: " << text << std::endl;
}

char *Text::substring(int start, int end)
{
	int m, n;
	int size = (end - start);
	char *newText = new char[size + 1];
	for (m = 0, n = start; n < end; (n++, m++))
	{
		newText[m] = text[n];
	}
	newText[size + 1] = '\0';
	return newText;
}

void Text::append(char *link)
{
	strcat(text, link);
}

void Text::obliterate()
{
	delete Text::text;
	// free(text);
}