#include<iostream>
#include<memory>

//program for using unique pointer

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    int area()
    {
        return length*breadth;
    }
};

int main()
{
    shared_ptr<Rectangle> ptr(new Rectangle(10,5));
    cout<<ptr->area()<<endl;
    shared_ptr<Rectangle> ptr2;
    ptr2=ptr;
    cout<<"Ptr2 "<<ptr2->area()<<endl;
    cout<<"Ptr "<<ptr->area()<<endl;
    cout<<ptr.use_count()<<endl; //give us how many pointers pointing at this.
    /*unique_ptr<Rectangle> ptr(new Rectangle(10,5));
    cout<<ptr->area();
    unique_ptr<Rectangle> ptr2;
    ptr2=move(ptr);
    cout<<ptr2->area()<<endl;*/
}
