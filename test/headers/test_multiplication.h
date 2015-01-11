#ifndef TEST_MULTIPLICATION_H
#define TEST_MULTIPLICATION_H

#include "../../src/headers/Vector2.h"
#include "test_helpers.h"

#include <iostream>

using namespace czvc;
using namespace std;

void test_multiplication()
{
	cout << "Beginning Vector Multiplication Test" << endl;

	int errors = 0;
	
	Vector2 a, b;
	a.X = 1.3;
	a.Y = 2.5;

	b.X = 2.8;
	b.Y = 1.4;

	double s1 = 3.2, s2 = -2.0;

	Vector2 c = a * s1;
	Vector2 d = b * s2;

	errors += assertEquals(c.X, 4.16, "X value product");
	errors += assertEquals(c.Y, 8.0, "Y value product");
	
	errors += assertEquals(d.X, -5.6, "X value negative product");
	errors += assertEquals(d.Y, -2.8, "Y value negative product");

	cout << "Finished Vector Multiplication Test, Errors: " << errors << endl;
	cout << "End Vector Multiplication Test" << endl;
}

#endif //TEST_MULTIPLICATION_H
