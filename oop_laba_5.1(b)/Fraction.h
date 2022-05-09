#pragma once

#include <iostream>
#include <string>
#include "Exception.h"

using namespace std;

class Fraction
{
private:

	long first;
	short second;

public:
	int get_a() const { return first; };
	int get_b() const { return second; };
	void set_a(unsigned int value);
	void set_b(unsigned int value);

	Fraction();
	Fraction(long, short);
	Fraction(const Fraction&);

	operator string() const;

	Fraction& operator ++();
	Fraction& operator --();
	Fraction operator ++(int);
	Fraction operator --(int);

	friend ostream& operator <<(ostream&, const Fraction&);
	friend istream& operator >>(istream&, Fraction&);

	friend Fraction operator - (const Fraction&, const Fraction&);
	friend bool operator < (Fraction&, Fraction&);
	friend bool operator == (Fraction&, Fraction&);
	friend bool operator > (Fraction&, Fraction&);
	friend bool operator <= (Fraction&, Fraction&);
	friend bool operator != (Fraction&, Fraction&);
	friend bool operator >= (Fraction&, Fraction&);

};

