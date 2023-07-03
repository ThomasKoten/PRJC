#pragma once
#include "Kompozice.h" 

class Gray: public IColor {
	void getColor() { cout << "gray"; }
};
class Green : public IColor {

	void getColor() { cout << "green"; }
};