#ifndef TEST_ADDITION_H
#define TEST_ADDITION_H

#include "../../src/headers/Vector2.h"
#include "test_helpers.h"

#include <iostream>

using namespace czvc;
using namespace std;

void test_addition()
{
	cout << "Beginning Vector Addition Test" << endl;

	int errors = 0;
	
	Vector2 a, b;
	a.X = 1.3;
	a.Y = 2.5;

	b.X = 2.8;
	b.Y = 1.4;

	Vector2 c = a + b;

	errors += assertEquals(c.X, 4.1, "X value Sum");
	errors += assertEquals(c.Y, 3.9, "Y value Sum");

	Vector2 d;
	d.X = -1.5;
	d.Y = -2.4;

	Vector2 e = a + d;
	
	errors += assertEquals(e.X, -0.2, "X value negative Sum");
	errors += assertEquals(e.Y, 0.1, "Y value negative Sum");

	cout << "Finished Vector Addition Test, Errors: " << errors << endl;
	cout << "End Vector Addition Test" << endl;
}

#endif //TEST_ADDITION_H
