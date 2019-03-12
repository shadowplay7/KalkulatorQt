#include "Kalkulator.h"

double Kalkulator::getA() {
	return a;
}

double Kalkulator::getB() {
	return b;
}

void Kalkulator::setA(double &x) {
	a = x;
}

void Kalkulator::setB(double &y) {
	b = y;
}

double Kalkulator::sumElements() {
	return getA() + getB();
}

double Kalkulator::subElements() {
	return getA() - getB();
}

double Kalkulator::multiElements() {
	return getA() * getB();;
}

double Kalkulator::doCalc(char &c) {
	switch (c)
	{
	case '+':
		return sumElements();
		break;
	case '-':
		return subElements();
		break;
	case '*':
		return multiElements();
		break;
	}
}
