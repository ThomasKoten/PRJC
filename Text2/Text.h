#pragma once
#include <cstdlib>

class Text
{
private:
    char *text;
    int length;

public:
    Text(int _len, char *_text) : length(_len)
    {
        int outputLen=(sizeof(_text) / sizeof(char));
        text = new char[_len + 1];
        for (int k = 0; k < outputLen ; k++)
        {
            text[k] = _text[k];
        }
        text[outputLen] = '\0';
    }
    ~Text()
    {
        Text::text = (char*)'\0';
        Text::length = 0;
    }
    char *substring(int start, int end);
    void append(char *link);
    void obliterate();
    void display();
};