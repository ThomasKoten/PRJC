#include <iostream>
#include "Vyjimka.h"
using namespace std;

int main() {
	Vyjimka eins("JE to jenda.",1);
	Handler hand1(1);
	Handler hand2(2);
	Handler hand3(3);
	Vyjimka zwei("Dva je cesta", 4);
	hand3.setNext(&hand2);
	hand2.setNext(&hand1);
	hand3.execute(&zwei);



	return 0;
}