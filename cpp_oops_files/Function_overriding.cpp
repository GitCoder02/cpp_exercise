#include<iostream>
using namespace std;

class Parent
{
public:
    void display()
    {
        cout<<"Display of Parent"<<endl;
    }
};

class Child:public Parent
{
public:
    void display()//(int x)
    {
        cout<<"Display of Child"<<endl;
    }
    /*void display(int x,int y)//(int x)
    {
        cout<<"Display of Child 2"<<endl;
    }*/
};

int main()
{

    Child c;
    c.display();//((10);
    //c.display(10,20);
    //c.Parent::display();
}
