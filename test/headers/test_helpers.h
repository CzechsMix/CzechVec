#ifndef TEST_HELPERS_H
#define TEST_HELPERS_H

#include <iostream>
#include <string>
#include <complex>

//This really should be close enough. C/C++ is optimized for speed after all...
#define EPSILON 0.000000001

using namespace std;

bool double_equals(double a, double b)
{
	return abs(a - b) < EPSILON;
}

bool assertTrue(bool b, string msg)
{
	if(!b)
	{
		cout << "Assertion failed: " << msg << endl;
	}
	return b;
}

bool assertFalse(bool b, string msg)
{
	return assertTrue(!b, msg);
}

bool assertEquals(double a, double b, string msg)
{
	if(!double_equals(a,b))
	{
		cout << a <<  " != " << b << ", " << msg << endl;
	}
	return !double_equals(a,b);
}

#endif //TEST_HELPERS_H
