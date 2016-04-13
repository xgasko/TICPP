//Write a program that uses a while loop to read words from standard input(cin) into a string.
//This is an “infinite” while loop, which you break out of(and exit the program) using a break statement.
//For each word that is read, evaluate it by first using a sequence of if statements to “map” an integral value to the word, and then use a switch statement that uses that integral value as its selector(this sequence of events is not meant to be good programming style; it’s just supposed to give you exercise with control flow).
//Inside each case, print something meaningful.You must decide what the “interesting” words are and what the meaning is.
//You must also decide what word will signal the end of the program.
//Test the program by redirecting a file into the program’s standard input(if you want to save typing, this file can be your program’s source file).



//The switch statement is a clean way to implement multi - way selection(i.e., selecting from among a number of different execution paths), but it requires a selector that evaluates to an integral value at compile - time.If you want to use, for example, a string object as a selector, it won’t work in a switch statement.For a string selector, you must instead use a series of if statements and compare the string inside the conditional.

#include <iostream>
#include <string>

using namespace std;

int main() {
	string str = "";
	string name = "Jozko";
	string surname = "Mrkvicka";
	string joke = "What do you call a bear with no teeth? -- A gummy bear!";
	int i = 0;
	cout << "Type one of the following (case sensitive): " << endl
		<< "Name" << endl
		<< "Surname" << endl
		<< "Joke" << endl
		<< "Quit" << endl << endl;

	while (1) {
		getline(cin, str);
		if (str == "Quit")
			break;
		else if (str == "Name")
			i = 1;
		else if (str == "Surname")
			i = 2;
		else if (str == "Joke")
			i = 3;
		switch (i)
		{
		case 1:
			cout << name << endl << endl;
			break;
		case 2:
			cout << surname << endl << endl;
			break;
		case 3:
			cout << joke << endl << endl;
			break;

		default:
			break;

		}

	}
}