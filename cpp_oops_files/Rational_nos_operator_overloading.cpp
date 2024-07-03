#include <iostream>
using namespace std;

class Rational
{
private:
    int num;
    int den;
public:
    Rational(int p=0,int q=0)
    {
        setNum(p);
        setDen(q);
    }
    void setNum(int p)
    {
        num=p;
    }
    void setDen(int q)
    {
        den=q;
    }
    Rational operator+(Rational r)
    {
        Rational temp;
        temp.num=num*r.den+r.num*den;
        cout<<temp.num<<endl;
        temp.den=den*r.den;
        cout << temp.den<<endl;
        return temp;
    }

    friend ostream & operator<<(ostream &o,Rational &r);
};

ostream & operator<<(ostream &o,Rational &r)
{
    o<<r.num<<"/"<<r.den;
    return o;
}

int main()
{
    Rational r1(5,8),r2(9,4),r3;
    r3=r1+r2;
    cout<<r3<<endl;
}
