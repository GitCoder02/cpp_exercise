#include<iostream>
using namespace std;

class Base
{
public:
    virtual void fun()
    {
        cout<<"fun of Base"<<endl;
    }
};

class Derived:public Base
{
public:
    void fun()
    {
        cout<<"fun of Derived"<<endl;
    }
};

int main()
{
    Derived d;
    Base *ptr=&d;
    ptr->fun();
    //in cpp a function is called according the class or pointer not the class of object if not used virtual function in base.
}
