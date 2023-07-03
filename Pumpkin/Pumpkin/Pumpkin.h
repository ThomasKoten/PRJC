#pragma once

class Pumpkin {
private:
	int weight;
	static int total_weight;
	static int count;
public:
	Pumpkin(int w);
	~Pumpkin();
	void display();
	static void total_display();
	int operator()();
	void operator+(Pumpkin &p);
	void operator+(int w);
};