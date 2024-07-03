#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    string name;
public:
    Employee(int i,string n)
    {
        id=i;
        name=n;
    }
    int getID()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
};

class fulltime : public Employee
{
private:
    int salary;
public:
    fulltime(int i,string n,int s):Employee(i,n)
    {
        salary=s;
    }
    int getSalary()
    {
        return salary;
    }
};


class parttime : public Employee
{
private:
    int wage;
public:
    parttime(int i,string n,int w):Employee(i,n)
    {
        wage=w;
    }
    int getWage()
    {
        return wage;
    }
};

int main()
{
    fulltime p1(101,"Jyothi",5000);
    parttime p2(102,"Joyti",300);



    cout<<"Salary of "<<p1.getName()<<" is "<<p1.getSalary()<<endl;
    cout<<"Daily Wage of "<<p2.getName()<<" is "<<p2.getWage()<<endl;
}
