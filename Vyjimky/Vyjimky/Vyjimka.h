#pragma once
#include <iostream>
#include <list>
using namespace std;

class Vyjimka {
private:
	int timestamp;
	string popis;
	int typV;
public:
	Vyjimka(string text, int t):popis(text),typV(t){}

	~Vyjimka();
	int getTyp();
	string getPopis();
};

class Handler {
private:
	int typH;
	Handler* next=NULL;
	list<Vyjimka *> excepts;
public:
	Handler(int t);
	void execute(Vyjimka* v);
	void setNext(Handler* n);
};