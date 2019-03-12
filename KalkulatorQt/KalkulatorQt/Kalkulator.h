#pragma once
#include <iostream>

class Kalkulator {

private:
	double a, b;
	char c;
public:
	Kalkulator(double &x, double &y): a(x), b(y) {};
	Kalkulator(double &x, double &y, char &c) : a(x), b(y), c(c) {};
	~Kalkulator() {};
	void setA(double &x);
	void setB(double &x);
	double doCalc(char &c);
	double getA();
	double getB();
	double sumElements();
	double multiElements();
	double subElements();

};

