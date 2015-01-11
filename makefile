test: test.o
	g++ -o test_run test.o

test.o: test/test.cpp test/headers/test_addition.h test/headers/test_subtraction.h test/headers/test_multiplication.h test/headers/test_division.h test/headers/test_ostream.h test/headers/test_helpers.h src/headers/Vector2.h
	g++ -c test/test.cpp
