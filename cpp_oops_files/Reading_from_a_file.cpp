#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream ifs("My.txt");
    //ifs.open("My.txt");  to open a file alternate method

    if(ifs)
        cout<<"file is open"<<endl;
    //if(ifs.is_open())
        //cout<<"file is open"<<endl;
    string name;
    int roll;
    string branch;

    ifs>>name>>roll>>branch;

    cout<<"Name "<<name<<endl;
    cout<<"Roll "<<roll<<endl;
    cout<<"Branch "<<branch<<endl;
}
