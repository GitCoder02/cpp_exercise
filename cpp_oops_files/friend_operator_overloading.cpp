#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;
public:
    Complex(int r=0,int i=0)
    {
        setReal(r);
        setImg(i);
    }
    void setReal(int r)
    {
        real=r;
    }
    int getReal()
    {
        return real;
    }
    int getImg()
    {
        return img;
    }

    void setImg(int i)
    {
        img=i;
    }
    friend Complex operator+(Complex c1,Complex c2);

};
//friend operator should always be written outside the class without using scope resolution method
//define in class but write the code outside

Complex operator+(Complex c1,Complex c2)
{
    Complex t;
    t.real=c1.real+c2.real;
    t.img=c1.img+c2.img;
    return t;
}

int main()
{
    Complex c1(5,6),c2(3,3),c3;
    c3=c1+c2;
    cout<<c3.getReal()<<" +i "<<c3.getImg()<<endl;
    return 0;
}
