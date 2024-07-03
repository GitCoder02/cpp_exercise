// check for armstrong number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
// if sum of cubes of digits of a number is equal to the number then it is called armstrong number
	int n, r,sum=0;
	cout << "Enter a number";
	cin >> n;
	int m = n;
	while (n > 0)
	{
		r = n % 10;
		n = n / 10;
		sum += r * r * r;

	}
	if (sum == m)
		cout << "it is a armstrong number";
	else
		cout << "it is not a armstrong number";
	return 0;
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
