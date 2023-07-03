#include "Stroj.h"
#include <iostream>
using namespace std;

int pA::getAtr()  const {
	return vyska;
}

int pB::getAtr() const {
	return sirka;
}
int pC::getAtr() const {
	return hloubka;
}
void pA::setAtr(int atr) {
	vyska = atr;
}
void pB::setAtr(int atr) {
	sirka = atr;
}
void pC::setAtr(int atr) {
	hloubka = atr;
}
Vyrobek::Vyrobek(int vys, int sir, int hlo) :vyska(vys), sirka(sir), hloubka(hlo) {}
Vyrobek::Vyrobek(pA pol1, pB pol2, pC pol3) :Vyrobek(pol1.getAtr(), pol2.getAtr(), pol3.getAtr()) {}
Vyrobek::Vyrobek(const Vyrobek& other) :Vyrobek(other.vyska,other.sirka,other.hloubka) {}
Vyrobek::~Vyrobek() {
	std::cout << "deleting  " << std::endl;
	vyska = 0;
	sirka = 0;
	hloubka = 0;
}
Vyrobek& Vyrobek::operator=(const Vyrobek& other) {
	if (this == &other) return *this;
	vyska = other.vyska;
	sirka = other.sirka;
	hloubka = other.hloubka;
	return *this;
	

}
void Vyrobek::getVyrobek() {
	cout << "Vyrobek ma vysku: " << vyska << ", sirku: " << sirka << ", hloubku: " << hloubka << endl;
}

void Stroj::addPol(void* pol) {
	casti[ElementCount] = (PolotovarEle*)pol;
	ElementCount++;
}
void Stroj::getPol() const {
	for (int k = 0; k < ElementCount; k++) {
		cout << casti[k]->getAtr() << endl;
	}
}
Stroj::Stroj(PolotovarEle** c) {
	Stroj *s = new Stroj();
	int count = sizeof(c);
	for (int i = 0; i < count; i++)
	{
		s->addPol(c[i]);
	}
	memcpy(casti, s->casti, sizeof(s->casti));

}

Stroj::Stroj(const Stroj& other) {
	casti = new PolotovarEle * [10];
	ElementCount = other.ElementCount;
	casti = other.casti;
}

Stroj& Stroj::operator=(const Stroj& other) {
	if (this == &other) return *this;
	Stroj new_stroj;
	new_stroj.casti = new PolotovarEle*[10];
	ElementCount= other.ElementCount;
	new_stroj.casti=other.casti;
	delete[] casti;
	casti = new_stroj.casti;
	return *this;

}

Stroj::~Stroj() {
	cout << "oblitirating" << endl;
	//delete[] casti;
	casti = new PolotovarEle * [10];
	ElementCount = 0;
}


