#include "Text.h"
#include <iostream>
#include <cstring>
using namespace std;


Text::Text(int _len, const char *_text) :length(_len)
{
	int outputLen=strlen(_text);
	this->text = new char[_len + 2];
	int k=0;
	for (int k = 0; k < outputLen; k++)
	{
			this->text[k] = _text[k];
	}
	this->text[outputLen] = '\0';
}

Text::~Text() {
	Text::text = (char*)'\0';
	Text::length = 0;
}



void Text::display()
{
	std::cout << "String: " << text << std::endl;
}

char* Text::substring(int start, int end)
{
	int m, n;
	int size = (end - start);
	char* newText = new char[size + 1];
	for (m = 0, n = start; n < end; (n++, m++))
	{
		newText[m] = text[n];
	}
	newText[size] = '\0';
	return newText;
}

void Text::append(const char* link)
{
	int p=strlen(text);
	for (int q = 0;link[q] != '\0'; (q++, p++))
	{
		text[p] = link[q];
	}
	text[p] = '\0';
}


void Text::obliterate()
{
	delete[] this->text;
	// free(text);
}