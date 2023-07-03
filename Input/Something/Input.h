#pragma once
#include <string>
using namespace std;

class FormElement
{
private:
    //string name;

public:
    FormElement() {};
    ~FormElement() {};
    virtual void getHTML() const = 0;

    //void setName(string s);
    //string getName();
};

class Input : public FormElement
{
private:
public:
    Input() {};
    ~Input() {};
    virtual void getHTML() const;
};

class Select : public FormElement
{
public:
    virtual void getHTML() const;
};

class Form
{
private:
    FormElement** inputs;
    int ElementCount;

public:
    Form()
    {
        inputs = new FormElement * [100];
        ElementCount = 0;
    };
    void addElement(void* input);
    void getHTML() const;
};