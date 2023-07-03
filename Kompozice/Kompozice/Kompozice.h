#pragma once
#include <iostream>
#include <list>
using namespace std;

class IFont {
public:
	virtual void getFont() = 0;
};
class IColor {
public:
	virtual void getColor() = 0;
};

class EleFont {
	list<IFont*> PoleFontu;
public:
	void addElement(IFont* input) {
		PoleFontu.push_back(input);
	}

	void getElements() {
		list<IFont*>::iterator it = PoleFontu.begin();
		while (it != PoleFontu.end()) {
			(*it)->getFont();
			it++;
		}
	}

};
class EleColor {
	list<IColor*> PoleColor;
public:
	void addElement(IColor* input) {
		PoleColor.push_back(input);
	}

	void getElements() {
		list<IColor*>::iterator it = PoleColor.begin();
		while (it != PoleColor.end()) {
			(*it)->getColor();
			it++;
		}
	}

};

class Text{
	string text;
	IFont* font;
	IColor* color;

public:
	Text(string st) {
		text = st;
	}
	~Text() {
		text = "";
	}
	void getText() {
		cout << text << endl;
	}
	void setFont(IFont* f) { this->font = f; }
	void setColor(IColor* c) { this->color = c; }
	void const printFont() { font->getFont(); }
	void const printColor() { color->getColor(); }
};

