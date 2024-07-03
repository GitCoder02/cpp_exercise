#include<iostream>
using namespace std;

class MyException
{

};
int divison(int a,int b)throw(int)
{
    if(b==0)
        throw 10;
    return a/b;
}

int main()
{
    int x=10,y=0,z;

    try
    {
        if(y==0)
            throw MyException();//throw string("Div by 0");//throw 1;  throw 1.5;
        z=x/y;
        cout<<z<<endl;
    }
    catch(MyException e)//(string e)//(int e)  (double e)
    {
        cout<<"Division by zero "<<endl;//e<<endl;
    }
    cout<<"Bye"<<endl;
}
