#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle();
    Rectangle(int l,int b);
    Rectangle(Rectangle &r);
    int getLength();
    int getBreadth();
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    //~Rectangle();

};

class Cuboid:public Rectangle
{
private:
    int height;
public:
    Cuboid(int h)
    {
        height=h;
    }
    int getHeight()
    {
        return height;
    }
    void setHeight(int h)
    {
        height=h;
    }
    int volume()
    {
        return getLength()*getBreadth()*height;
    }
};

int main()
{
    Cuboid c(5);
    c.setLength(10);
    c.setBreadth(7);
    cout<<"Volume is "<<c.volume()<<endl;
}

Rectangle::Rectangle()
    {
        length=1;
        breadth=1;
    }
Rectangle::Rectangle(int l,int b)
{
    length=l;
    breadth=b;
}

Rectangle::Rectangle(Rectangle &r)
    {
        length=r.length;
        breadth=r.breadth;
    }
void Rectangle::setLength(int l)
    {
        if(l>0)
            length=l;
        else
            length=0;
    }
void Rectangle::setBreadth(int b)
    {
        if(b>0)
            breadth=b;
        else
            breadth=0;
    }
int Rectangle::getLength()
    {
        return length;
    }
int Rectangle::getBreadth()
    {
        return breadth;
    }
int Rectangle::area()
    {
        return length*breadth;
    }
int Rectangle::perimeter()
    {
        return 2*(length+breadth);
    }
bool Rectangle::isSquare()
    {
        return length==breadth;
    }
/*Rectangle::~Rectangle()
    {
        cout<<"Rectangle Destroyed"<<endl;
    }*/

