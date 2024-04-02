#include "Calculator.h"
#include <iostream>
#include <sstream>
using namespace std;


Calculator::Calculator() {
	fraction.setNumerator(0);
	fraction.setDenominator(1);
}

Calculator::Calculator(long num, unsigned short denom) {
	num = fraction.getNumerator();
	denom = fraction.getDenominator();
}


Calculator::Calculator(const Calculator& other) {
	fraction.setNumerator(other.getNumerator());
	fraction.setDenominator(other.getDenominator());
}


long Calculator::getNumerator() const {
	return fraction.getNumerator();
}

unsigned short Calculator::getDenominator() const {
	return fraction.getDenominator();
}



Calculator operator+(const Calculator& int1, const Calculator& int2) {
	Calculator result;
	long res;
	unsigned short res1;
	res = int1.getNumerator() + int2.getNumerator();
	res1 = int1.getDenominator() + int2.getDenominator();
	result.setNumerator(res);
	result.setDenominator(res1);
	return result;
}

Calculator operator-(const Calculator& int1, const Calculator& int2) {
	Calculator result;
	long res;
	unsigned short res1;
	res = int1.getNumerator() - int2.getNumerator();
	res1 = int1.getDenominator() - int2.getDenominator();
	result.setNumerator(res);
	result.setDenominator(res1);
	return result;
}

Calculator operator*(const Calculator& int1, const Calculator& int2) {
	Calculator result;
	long res;
	unsigned short res1;
	res = int1.getNumerator() * int2.getNumerator();
	res1 = int1.getDenominator() * int2.getDenominator();
	result.setNumerator(res);
	result.setDenominator(res1);
	return result;
}

bool operator >=(const Calculator& int1, const Calculator& int2) {
	return (int1.getNumerator() >= int2.getNumerator()) && (int1.getDenominator() >= int2.getDenominator());
}
bool operator <=(const Calculator& int1, const Calculator& int2) {
	return (int1.getNumerator() <= int2.getNumerator()) && (int1.getDenominator() <= int2.getDenominator());
}
bool operator !=(const Calculator& int1, const Calculator& int2) {
	return !(int1 == int2);
}

bool operator==(const Calculator& int1, const Calculator& int2) {
	return (int1.getNumerator() == int2.getNumerator()) && (int1.getDenominator() == int2.getDenominator());
}

bool operator<(const Calculator& int1, const Calculator& int2) {
	return (int1.getNumerator() < int2.getNumerator()) && (int1.getDenominator() < int2.getDenominator());
}

bool operator>(const Calculator& int1, const Calculator& int2) {
	return (int1.getNumerator() > int2.getNumerator()) && (int1.getDenominator() > int2.getDenominator());
}

Calculator Calculator::operator=(const Calculator& other) {
	fraction.setNumerator(other.getNumerator());
	fraction.setDenominator(other.getDenominator());
	return *this;
};



ostream& operator << (ostream& out, const Calculator& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, Calculator& r)
{
	long x;
	unsigned short y = 1;
	cout << "Enter Numerator: "; in >> x;
	r.setNumerator(x); cout << endl;
	cout << "Enter Denomirator: "; 
	in >> x; 
	r.setDenominator(y); cout << endl;
	cout << endl;
	return in;
}

Calculator::operator string() const {
	stringstream ss;
	cout << "Your Numerator: " << fraction.getNumerator() << endl;
	cout << "Your Denomirator: " << fraction.getDenominator() << endl;
	ss << endl;
	return ss.str();
}


Calculator& Calculator::operator ++()
{   unsigned short x = fraction.getDenominator();
    x++;
	fraction.setDenominator(x);
	return *this;
}
Calculator& Calculator::operator --()
{
	unsigned short x = fraction.getDenominator();
	x--;
	fraction.setDenominator(x);
	return *this;
}
Calculator Calculator::operator ++(int)
{
	Calculator t(*this);
	unsigned short x = fraction.getDenominator();
	x++;
	t.setDenominator(x);
	return t;
}
Calculator Calculator::operator --(int)
{
	Calculator t(*this);
	unsigned short x = fraction.getDenominator();
	x--;
	t.setDenominator(x);
	return t;
}
