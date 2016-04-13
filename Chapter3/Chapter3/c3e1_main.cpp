//Create a header file(with an extension of ‘.h’).In this file, declare a group of functions by varying the argument lists and return values from among the following : void, char, int, and float.Now create a.cpp file that includes your header file and creates definitions for all of these functions.Each definition should simply print out the function name, argument list, and return type so you know it’s been called.Create a second.cpp file that includes your header file and defines int main(), containing calls to all of your functions.Compile and run your program.

#include "c3e1.h"

int main() {
	int a = 1;
	float b = 2;
	char c = 'x';
	func1(a);
	func2();
	func3(b);
	func4(a);
}