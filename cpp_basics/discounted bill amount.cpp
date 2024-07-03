// discounted bill amount.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    double billamount, discount, c;
    cout << "Enter bill amount ";
    cin >> billamount;
    if (billamount >= 500)
    {
        discount =billamount * 20 / 100;      
    }
    else if(billamount >=100 && billamount <500)
    {
        discount =(billamount * 10 / 100);       
    }
    else
    {
        discount = 0;
        c = billamount;
//        cout << "Discount is : 0\n";
 //       cout << "Discounted amount is : " << billamount<<endl;
    }
    cout << "Discount is : " << discount << endl;
    c = billamount - discount;
    cout << "Discounted amount is : " << c << endl;
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
