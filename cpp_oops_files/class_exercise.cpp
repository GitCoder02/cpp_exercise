#include <iostream>
using namespace std;

class student
{
private:
    int roll;
    string name;
    int mark1,mark2,mark3;
public:
    student(int r,string n,int m1,int m2,int m3)
    {
        setRoll(r);
        setName(n);
        setMarks(m1,m2,m3);
    }
    void setRoll(int r)
    {
        roll=r;
    }
    void setName(string n)
    {
        name=n;
    }
    void setMarks(int m1,int m2,int m3)
    {
        mark1=m1;
        mark2=m2;
        mark3=m3;
    }

    int totalmks()
    {
        return mark1+mark2+mark3;
    }

    char grade()
    {
        char grd;
        int mks=(mark1+mark2+mark3)/3;
        if(mks>90)
            grd='A';
        else if(mks>80)
            grd='B';
        else if(mks>70)
            grd='C';
        else if(mks>60)
            grd='D';
        else if(mks>50)
            grd='E';
        else
            grd='F';

        return grd;
    }
    string getName()
    {
        return name;
    }
    int getRoll()
    {
        return roll;
    }
};

int main()
{
    int roll;
    string name;
    int mark1,mark2,mark3;
    cout<<"Enter your name : "<<endl;
    cin>>name;
    cout<<"Enter your roll number : "<<endl;
    cin>>roll;
    cout<<"Enter marks of 3 subjects : "<<endl;
    cin>>mark1>>mark2>>mark3;
    student s(roll,name,mark1,mark2,mark3);
    cout<<"Total marks : "<<s.totalmks()<<endl;
    cout<<"Grade : "<<s.grade()<<endl;
}
