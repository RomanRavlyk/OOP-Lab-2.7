#pragma once
#include <iostream>
#include "Fraction.h"
using namespace std;

class Calculator {
    Fraction fraction;
public:

	Calculator();
	Calculator(long num, unsigned short denom);
	Calculator(const Calculator& other);
	~Calculator() {};

    void setFraction(Fraction fraction) { this->fraction = fraction; };
    Fraction getFraction() const { return fraction; };
	long getNumerator() const;
	unsigned short getDenominator() const;
	void setNumerator(long value) { fraction.setNumerator(value); };
	void setDenominator(unsigned short value) { fraction.setDenominator(value); };
	
	Calculator& operator ++();
	Calculator& operator --();
	Calculator operator ++(int);
	Calculator operator --(int);

	Calculator operator=(const Calculator& int1);

	friend bool operator ==(const Calculator& int1, const Calculator& int2);
	friend bool operator >(const Calculator& int1, const Calculator& int2);
	friend bool operator <(const Calculator& int1, const Calculator& int2);
	friend bool operator !=(const Calculator& int1, const Calculator& int2);
	friend bool operator >=(const Calculator& int1, const Calculator& int2);
	friend bool operator <=(const Calculator& int1, const Calculator& int2);
	friend Calculator operator+ (const Calculator& int1, const Calculator& int2);
	friend Calculator operator- (const Calculator& int1, const Calculator& int2);
	friend Calculator operator* (const Calculator& int1, const Calculator& int2);

	friend ostream& operator << (ostream&, const Calculator&);
	friend istream& operator >> (istream&, Calculator&);
	operator string() const;
};