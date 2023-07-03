#include <iostream>
#include "Stroj.h"
using namespace std;

int main() {
	pA pol1;
	pB pol2;
	pC pol3;
	Stroj str;

	pol1.setAtr(3);
	pol3.setAtr(54.5);

	cout << pol1.getAtr() << endl;
	cout << pol2.getAtr() << endl;
	cout << pol3.getAtr() << endl;
	Vyrobek vyr(pol1, pol2, pol3);
	Vyrobek vyr8(15, 20, 7);
	Vyrobek vyr2(vyr);
	
	vyr.getVyrobek();
	cout << "Scout" << endl;
	vyr = vyr8;
	vyr.getVyrobek();
	//vyr2.getVyrobek();
	/*Vyrobek vyr3(0, 80, 0);
	vyr3 = vyr;*/
	str.addPol(&pol3);
	str.addPol(&pol1);
	str.addPol(&pol3);
	str.addPol(&pol2);
	str.getPol();

	Stroj str2(str);
	cout << "Something\n";
	str2.getPol();

	Stroj str3;
	str3.addPol(&pol1);
	str3.getPol();
	cout << "SOmmerthing\n";
	str3 = str;
	str3.getPol();
	//vyr3.getVyrobek();
	return 0;
}