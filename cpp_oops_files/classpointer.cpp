#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    Rectangle r;
    Rectangle *p;
    p=&r;
    p->length=10;
    p->breadth=5;
    cout<<p->area()<<endl;
    cout<<p->perimeter()<<endl;
    //Rectangle *p=new Rectangle;
    //will get the same result if after removing - Rectangle r; and - p=&r
    //this is in heap memeory

}
