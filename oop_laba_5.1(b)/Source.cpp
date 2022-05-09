#include "Fraction.h"
#include <exception>;
#include <stdexcept>;
#include <iostream>

int main()
{
	bool result;
	Fraction f1, f4;
	cout << "Enter first number" << endl;
	cin >> f1;
	cout << "Chuslo 1:" << f1 << endl;
	do
	{
		try 
		{
			result = true;
			cout << "Enter second number" << endl;
			cin >> f4;
			cout << "Chuslo 2:" << f4 << endl;
		}
		catch(invalid_argument e)
		{
			result = false;
			cerr << e.what() << endl;
		}
		catch (bad_exception e)
		{
			result = false;
			cerr << e.what() << endl;
		}
		catch (Exception e)
		{
			result = false;
			cerr << e.What() << endl;
		}
		catch (const char* e)
		{
			result = false;
			cerr << e << endl;
		}
	} while (!result);

	cout << "Sub = " << f1 - f4 << endl;
	int f;
	f = f1 < f4;
	cout << "f1 < f4 - " << f << endl;
	f = f1 == f4;
	cout << "f1 == f4 - " << f << endl;
	f = f1 > f4;
	cout << "f1 > f4 - " << f << endl;
	f = f1 <= f4;
	cout << "f1 <= f4 - " << f << endl;
	f = f1 != f4;
	cout << "f1 != f4 - " << f << endl;
	f = f1 >= f4;
	cout << "f1 >= f4 - " << f << endl;

	cout << "Chuslo 1 = " << f1 << endl;
	cout << ++f1 << endl;
	cout << --f1 << endl;
	cout << f1++ << endl;
	cout << f1-- << endl;

	return 0;
}
