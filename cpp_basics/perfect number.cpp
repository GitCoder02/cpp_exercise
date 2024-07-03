// perfect number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    // if the sum of the factors is double the number then it is a perfect number
    int n, i, sum = 0,p;
    cout << "Enter a number ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }

    }
    cout << "sum is " << sum << endl;
    p = n * 2;
    if (sum == p)
    {
        cout << "It is a perfect number" << endl;
    }
    else
        cout << "It is not a perfect number\n";
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
