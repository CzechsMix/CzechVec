#include <iostream>

#include "headers/test_addition.h"
#include "headers/test_subtraction.h"
#include "headers/test_multiplication.h"
#include "headers/test_division.h"
#include "headers/test_ostream.h"

using namespace std;

int main()
{
	endl(cout);
	test_addition();
	endl(cout);
	test_subtraction();
	endl(cout);
	test_multiplication();
	endl(cout);
	test_division();
	endl(cout);
	test_ostream();
	endl(cout);

	return 0;
}
