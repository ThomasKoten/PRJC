#include "Input.h"
#include <iostream>



void Input::getHTML() const
{
    std::cout << "INPUT " << std::endl;
}

void Select::getHTML() const
{
    std::cout << "SELECT " << std::endl;
}

void Form::getHTML() const {
    for (int k = 0; k < ElementCount; k++) {
        inputs[k]->getHTML();
    }
}

void Form::addElement(void* FE) {
    inputs[ElementCount] = (FormElement*)FE;
    ElementCount++;
}
/*
string FormElement::getName()
{
    return name;
}

void FormElement::setName(string s)
{
    name = s;
}
*/