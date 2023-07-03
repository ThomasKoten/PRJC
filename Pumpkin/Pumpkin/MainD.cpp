#include <iostream>
using namespace std;
#include "Pumpkin.h"

int main() {

	Pumpkin p1(10);
	Pumpkin* p2 = new Pumpkin(25);
	Pumpkin p3(14);
	p1.display();
	p2->total_display();
	p1.total_display();
	p1 + 13;
	p1.display();
	*p2 + p3;
	p2->display();
	delete p2;
	return 0;
};