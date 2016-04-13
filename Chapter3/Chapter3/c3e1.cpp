//Create a header file(with an extension of ‘.h’).In this file, declare a group of functions by varying the argument lists and return values from among the following : void, char, int, and float.Now create a.cpp file that includes your header file and creates definitions for all of these functions.Each definition should simply print out the function name, argument list, and return type so you know it’s been called.Create a second.cpp file that includes your header file and defines int main(), containing calls to all of your functions.Compile and run your program.

#include "c3e1.h"

using namespace std;

int func1(int a) {
	cout << "int func1(int a)" << endl;
	return a;
}

void func2() {
	cout << "void func2()" << endl;
}

float func3(float b) {
	cout << "float func3(float b)" << endl;
	return b;
}

char func4(char c) {
	cout << "char func4(char c)" << endl;
	return c;
}
