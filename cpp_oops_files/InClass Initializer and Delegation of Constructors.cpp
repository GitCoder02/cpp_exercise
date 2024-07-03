#include<iostream>

using namespace std;

class Test
{
    int x=10;
    int y=20;
public:
    Test(int a,int b)
    {
        x=a;
        y=b;
    }
    Test():Test(1,1)
    {
        //this will call the above constructor with 1,1.
    }
};
