#include "Fraction.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <sstream>

using namespace std;

void Fraction::set_a(unsigned int value)
{

	first = value;

}

void Fraction::set_b(unsigned int value)
{

	second = value;
	
}

Fraction::Fraction()
	: first(0), second(0)
{}

Fraction::Fraction(long f, short s)
{
	first = f;
	second = s;

}

Fraction::Fraction(const Fraction& f)
{
	first = f.first;
	second = f.second;
}

Fraction::operator string() const
{
	stringstream ss;

	ss << "Zufra = " << first << "," << second << endl;

	return ss.str();
}

Fraction& Fraction::operator ++()
{
	first++;
	return *this;
}

Fraction& Fraction::operator --()
{
	second--;
	return *this;
}

Fraction Fraction::operator ++(int)
{
	Fraction t(*this);
	first++;
	return t;
	
}

Fraction Fraction::operator --(int)
{
	Fraction t(*this);
	second--;
	return t;
}

ostream& operator <<(ostream& out, const Fraction& f)
{
	out << string(f);
	return out;
}
istream& operator >>(istream& in, Fraction& a)
{
	cout << "Zila chastuna = "; in >> a.first;
	cout << "drobova chastuna = "; in >> a.second;
	cout << endl;

	if (a.first == 0 && a.second < 0)
		throw invalid_argument("Invalid_argument");
	else if (a.first < 0 && a.second < 0)
		throw bad_exception();
	else if (a.first > 0 && a.second < 0)
		throw Exception("My exception");
	else if (a.first == 0 && a.second == 0)
		throw "Exception";

	return in;
}
Fraction operator - (const Fraction& x, const Fraction& y)
{
	return Fraction(x.first - y.first, x.second - y.second);
}

bool operator < (Fraction& f, Fraction& s)
{
	return f.first < s.first || f.first == s.first && f.second < s.second;
}

bool operator == (Fraction& f, Fraction& s)
{
	return f.first == s.first && f.second == s.second;
}

bool operator > (Fraction& f, Fraction& s)
{
	return f.first > s.first || f.first == s.first && f.second > s.second;
}

bool operator <= (Fraction& f, Fraction& s)
{
	return !(f.first < s.first || f.first == s.first && f.second < s.second);
}

bool operator != (Fraction& f, Fraction& s)
{
	return !(f.first == s.first && f.second == s.second);
}

bool operator >= (Fraction& f, Fraction& s)
{
	return !(f.first > s.first || f.first == s.first && f.second > s.second);
}
