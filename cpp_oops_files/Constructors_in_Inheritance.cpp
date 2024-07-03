#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout<<"Non-param of Base"<<endl;
    }
    Base(int x)
    {
        cout<<"Param of Base "<<x<<endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout<<"Non-param of Derived"<<endl;
    }
    Derived(int x,int a):Base(x)
    {
        cout<<"Param of Derived "<<a<<endl;
    }
};

int main()
{
    Derived d(10,5);
}
