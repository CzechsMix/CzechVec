#ifndef TEST_DIVISION_H
#define TEST_DIVISION_H

#include "../../src/headers/Vector2.h"
#include "test_helpers.h"

#include <iostream>

using namespace czvc;
using namespace std;

void test_division()
{
	cout << "Beginning Vector Division Test" << endl;

	int errors = 0;
	
	Vector2 a, b;
	a.X = 1.3;
	a.Y = 2.5;

	b.X = 2.8;
	b.Y = 1.4;

	double s1 = 3.2, s2 = -2.0;

	Vector2 c = a / s1;
	Vector2 d = b / s2;

	errors += assertEquals(c.X, 0.40625, "X value dividend");
	errors += assertEquals(c.Y, 0.78125, "Y value dividend");
	
	errors += assertEquals(d.X, -1.4, "X value negative dividend");
	errors += assertEquals(d.Y, -0.7, "Y value negative dividend");

	cout << "Finished Vector Division Test, Errors: " << errors << endl;
	cout << "End Vector Division Test" << endl;
}

#endif //TEST_DIVISION_H
