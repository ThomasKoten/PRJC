#include <iostream>
using namespace std;
#include "Pumpkin.h"

int Pumpkin::count = 0;
int Pumpkin::total_weight = 0;
void Pumpkin::display() {
	cout << weight << endl;
}
void Pumpkin::total_display() {
	cout <<"Pocet:" << count << " vaha " << total_weight << endl;
}
Pumpkin::Pumpkin(int w):weight(w){
	count++;
	total_weight += w;
}
Pumpkin::~Pumpkin() {
	count--;
	total_weight -= this->weight;
}
int Pumpkin::operator()() {
	return this->weight;
}
void Pumpkin::operator+(Pumpkin &p) {
	this->weight += p.weight;
}
void Pumpkin::operator+(int w) {
	this->weight += w;
}
