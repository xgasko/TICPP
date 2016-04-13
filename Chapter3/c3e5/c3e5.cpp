//Operator precedence defines the order in which an expression evaluates when several different operators are present.C and C++ have specific rules to determine the order of evaluation.The easiest to remember is that multiplication and division happen before addition and subtraction.After that, if an expression isn’t transparent to you it probably won’t be for anyone reading the code, so you should use parentheses to make the order of evaluation explicit.For example :
//
//A = X + Y - 2 / 2 + Z;
//
//has a very different meaning from the same statement with a particular grouping of parentheses :
//
//A = X + (Y - 2) / (2 + Z);
//
//(Try evaluating the result with X = 1, Y = 2, and Z = 3.)

#include <iostream>

using namespace std;

int main() {
	int A = 0, B = 0;
	int X = 1, Y = 2, Z = 3;

	A = X + Y - 2 / 2 + Z;
	B = X + (Y - 2) / (2 + Z);

	cout << "A: " << A << endl;
	cout << "B: " << B << endl;

}