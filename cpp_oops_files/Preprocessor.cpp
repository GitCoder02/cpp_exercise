#include<iostream>
using namespace std;

#define PI 3.1425

#define max(x,y) (x>y?x:y)

#define msg(x) #x

#ifndef PI
#define PI 3
#endif
int main()
{
    cout<<max(10,12)<<endl;
    cout<<PI<<endl;
    cout<<msg(hello);
}
