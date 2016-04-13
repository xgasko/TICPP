//Create two functions, one that takes a string* and one that takes a string&.Each of these functions should modify the outside string object in its own unique way. In main(), create and initialize a string object, print it, then pass it to each of the two functions, printing the results.

#include <iostream>
#include <string>
using namespace std;


void func1(string* str1) {
	*str1 = "My name is John. Carrot John.";
}

void func2(string& str2) {
	str2 = "My name is Bond. James Bond.";
}

int main() {
	string str = "My name is Carrot. John Carrot.";
	cout << "string str: " << str << endl;
	func1(&str);
	cout << "func1(string*): " << str << endl;
	func2(str);
	cout << "func2(string&): " << str << endl;
}