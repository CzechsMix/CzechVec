#ifndef TEST_OSTREAM_H
#define TEST_OSTREAM_H

#include "../../src/headers/Vector2.h"
#include "test_helpers.h"

#include <iostream>

using namespace czvc;
using namespace std;

void test_ostream()
{
	Vector2 a(2.6, 8.2);
	Vector2 b(-8.9, 0.0465);

	cout << "Printing some vectors" << endl;
	cout << a << endl << b << endl;
	cout << "Print Test complete" << endl;
}

#endif
