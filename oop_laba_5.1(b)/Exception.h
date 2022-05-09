#pragma once
#include <iostream>
#include <string>

using namespace std;

class Exception
{
private:
	string what;
public:
	Exception(string w) :what(w) {}

	string What() { return what; }
};

