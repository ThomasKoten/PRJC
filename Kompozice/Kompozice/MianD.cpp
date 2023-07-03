#include <iostream>
#include "Kompozice.h"
#include "Colors.h"
#include "BaseFont.h"

int main() {

	//Text big = Text("There were better times, there were worse times.");
	Text *bold= new Text("Sumeting");
	bold->setColor(new Gray());
	bold->setColor(new Green());
	bold->setColor(new Green());
	bold->printColor();
	return 0;
}
