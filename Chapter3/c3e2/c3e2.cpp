//Write a program that uses two nested for loops and the modulus operator (%) to detect and print prime numbers(integral numbers that are not evenly divisible by any other numbers except for themselves and 1).

#include <iostream>

using namespace std;

int main() {
	int i;
	cout << "Prime numbers: " << endl;
	for (i = 3; i < 100; i++)
	{
		int x = 0;
		for (int j = 2; j < i; j++)
		{
			int y = i % j;
			if (y != 0)
				x++;
		}
		if (x == i-2)
			cout << i << " ";
	}
	system("pause");
}