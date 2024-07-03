#include<iostream>
using namespace std;

class Car//bcuz of pure virtual function hence abstract class, hence i cant create an object of abstract car class
{
public:
    virtual void start()=0;//pure virtual function
};
//if innova class doesnt ovverride virtual fun then innova also becomes abstract class and hence we cant create objects of innova class too
class Innova:public Car
{
    void start()
    {
        cout<<"Innova started"<<endl;
    }
};
class Swift:public Car
{
    void start()
    {
        cout<<"Swift started"<<endl;
    }
};

int main()
{
    Car*p=new Innova();
    p->start();
    p=new Swift();
    p->start();
}

