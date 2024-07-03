#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream ofs("My.txt",ios::trunc);  //("My.txt",ios::app) (to append data to existing file)
    ofs<<"John"<<endl;
    ofs<<25<<endl;
    ofs<<"cs"<<endl;

    ofs.close();
}
