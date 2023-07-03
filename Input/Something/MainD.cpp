//#include "Input.h"
#include "Input.h"
#include <iostream>
using namespace std;

int main() {
	//sel1.setName("Man");
	//in1->setName("Boy");
	Input in1;
	Select sel1;
	Form form1;
	form1.addElement(&in1);
	form1.addElement(&sel1);
	form1.addElement(&in1);
	form1.addElement(&sel1);
	//cout<<&in1<<endl<<&sel1<<endl;
	//in1->getHTML();
	//sel1.getHTML();
	form1.getHTML();
}
