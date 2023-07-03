#include "Vyjimka.h"
#include <iostream>
#include <list>
using namespace std;

Vyjimka::~Vyjimka(){
		popis = "";
		timestamp = 0;
}

int Vyjimka::getTyp(){
	return typV;
}
string Vyjimka::getPopis() {
	return popis;
}

void Handler::execute(Vyjimka* v) {
	if (v->getTyp() != typH) {
		if (this->next == NULL){
			cout << "Je to NULL" << endl;
				return;
		}
		this->next->execute(v);
		return;
	}
	cout << v->getPopis() << endl;

}
Handler::Handler(int t):typH(t) {}
void Handler::setNext(Handler* n){
	next = n;
}
