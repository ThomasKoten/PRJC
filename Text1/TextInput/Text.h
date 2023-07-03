#pragma once
#include <cstdlib>

class Text
{
private:
    char* text;
    int length;

public:
    Text(int _len, const char *_text);
    ~Text();
    char* substring(int start, int end);
    void append(const char* link);
    void obliterate();
    void display();
};