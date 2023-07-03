#pragma once
using namespace std;

class PolotovarEle {
private:
	int atribut = 0;
public:
	virtual void setAtr(int atribut) = 0;
	virtual int getAtr() const = 0;
};
class pA :PolotovarEle {
private:
	int vyska = 0;
public:
	virtual void setAtr(int atr);
	virtual int getAtr() const;
};
class pB :PolotovarEle {
private:
	int sirka = 0;
public:
	virtual void setAtr(int atr);
	virtual int getAtr() const;
};
class pC :PolotovarEle {
private:
	int hloubka = 0;
public:
	virtual void setAtr(int atr);
	virtual int getAtr() const;
};

class Vyrobek {
private:
	int vyska = 0;
	int sirka = 0;
	int hloubka = 0;
public:
	Vyrobek(int vys, int sir, int hlo);
	Vyrobek(pA pol1, pB pol2, pC pol3);
	Vyrobek(const Vyrobek& other);
	~Vyrobek();
	Vyrobek& operator=(const Vyrobek& other);
	void getVyrobek();

};

class Stroj {
private:
	PolotovarEle** casti;
	int ElementCount;

public:
	Stroj()
	{
		casti = new PolotovarEle * [10];
		ElementCount = 0;
	};
	Stroj(PolotovarEle** casti);
	Stroj(const Stroj& other);
	~Stroj();
	Stroj& operator=(const Stroj& other);

	void addPol(void* pol);
	void getPol() const;
};