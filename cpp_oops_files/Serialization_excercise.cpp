/*#include<iostream>
#include<fstream>

using namespace std;

class Data
{
public:
    string name;
    int price;
    int quantity;
    friend ofstream & operator<<(ofstream &ofs,Data &d);
    friend ifstream & operator>>(ifstream &ifs,Data &d);
};

ofstream & operator<<(ofstream &ofs,Data &d)
{
    ofs<<d.name<<endl;
    ofs<<d.price<<endl;
    ofs<<d.quantity<<endl;
    return ofs;
}

ifstream & operator>>(ifstream &ifs,Data &d)
{
    ifs>>d.name>>d.price>>d.quantity;
    return ifs;
}

int main()
{
    Data d;
    //d.name="Akshaj";d.price=20000;d.quantity=5;
    //ofstream ofs("Serialization-excercise.txt");
    //ofs<<d;
    //ofs.close();
    ifstream ifs("Serialization-excercise.txt");
    ifs>>d;
    cout<<"Name "<<d.name<<endl;
    cout<<"Price "<<d.price<<endl;
    cout<<"Quantity "<<d.quantity<<endl;

    ifs.close();

}*/


#include<iostream>
#include<fstream>
using namespace std;
class Item
{
private:
 string name;
 float price;
 int qty;
public:
 Item(){}
 Item(string n,float p,int q);
 friend ifstream & operator>>(ifstream &ifs,Item &i);
 friend ofstream & operator<<(ofstream &ofs,Item &i);
 friend ostream & operator<<(ostream &os,Item &i);

};
int main()
{
 int n;
 string name;
 float price;
 int qty;
 cout<<"Enter number of Item:";
 cin>>n;
 Item *list[n];
 cout<<"Enter All Item "<<endl;
 for(int i=0;i<n;i++)
 {
 cout<<"Enter "<<i+1<<" Item Name , price and quantity";
 cin>>name;
 cin>>price;
 cin>>qty;
 list[i]=new Item(name,price,qty);

 }

 ofstream fos("Items.txt");
 for(int i=0;i<n;i++)
 {
 fos<<*list[i];
 }
 Item item;
 ifstream fis("Items.txt");
 for(int i=0;i<3;i++)
 {
 fis>>item;
 cout<<"Item "<<i<<item<<endl;
 }

}
Item::Item(string n,float p,int q)
{
 name=n;
 price=p;
 qty=q;
}
ofstream & operator<<(ofstream &ofs,Item &i)
{
 ofs<<i.name<<endl<<i.price<<endl<<i.qty<<endl;
 return ofs;
}
ifstream & operator>>(ifstream &ifs,Item &i)
{
 ifs>>i.name>>i.price>>i.qty;
 return ifs;
}
ostream & operator<<(ostream &os,Item &i)
{
 os<<i.name<<endl<<i.price<<endl<<i.qty<<endl;
 return os;
}

