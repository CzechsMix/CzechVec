#ifndef TEST_SUBTRACTION_H
#define TEST_SUBTRACTION_H

#include "../../src/headers/Vector2.h"
#include "test_helpers.h"

#include <iostream>

using namespace czvc;
using namespace std;

void test_subtraction()
{
	cout << "Beginning Vector Subtraction Test" << endl;

	int errors = 0;
	
	Vector2 a, b;
	a.X = 1.3;
	a.Y = 2.5;

	b.X = 2.8;
	b.Y = 1.4;

	Vector2 c = a - b;

	errors += assertEquals(c.X, -1.5, "X value Sum");
	errors += assertEquals(c.Y, 1.1, "Y value Sum");

	Vector2 d;
	d.X = -1.5;
	d.Y = -2.4;

	Vector2 e = a - d;
	
	errors += assertEquals(e.X, 2.8, "X value negative Sum");
	errors += assertEquals(e.Y, 4.9, "Y value negative Sum");

	cout << "Finished Vector Subtraction Test, Errors: " << errors << endl;
	cout << "End Vector Subtraction Test" << endl;
}

#endif //TEST_SUBTRACTION_H
