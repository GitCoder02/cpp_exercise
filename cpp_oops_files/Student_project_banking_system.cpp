#include<iostream>
#include<fstream>
#include<map>

using namespace std;

class Account
{
    string Fname;
    string Lname;
    int bal;
    int accno;
    static int nextaccno;
public:
    Account(){}
    Account(string f,string l,int b)
    {
        nextaccno++;
        accno=nextaccno;
        Fname=f;
        Lname=l;
        bal=b;
    }
    int getAccno()
    {
        return accno;
    }
    string getFname()
    {
        return Fname;
    }
    string getLname()
    {
        return Lname;
    }
    int getBal()
    {
        return bal;
    }
    void Deposit(int amt)
    {
        bal+=amt;
    }
    void Withdraw(int amt)
    {
        bal-=amt;
    }
    static void setLastaccno(int accn)
    {
        nextaccno=accn;
    }
    static int getLastaccno()
    {
        return nextaccno;
    }
    friend ofstream & operator<<(ofstream &ofs,Account &a);
    friend ifstream & operator>>(ifstream &ifs,Account &a);
    friend ostream & operator<<(ostream &os,Account &a);
};

int Account::nextaccno=0;

class Bank
{
    map<int,Account> acc;
public:
    Bank()
    {
        Account accou;
        ifstream ifile;
        ifile.open("Accounts_data.txt");
        if(!ifile)
        {
            cout<<"File Not Found!"<<endl;
            return;
        }
        while(!ifile.eof()) // read till end of file
        {
            ifile>>accou;
            acc.insert(pair<int,Account>(accou.getAccno(),accou));
        }
        Account::setLastaccno(accou.getAccno());
        ifile.close();
    }

    Account Openacc(string f,string l,int b)
    {
        ofstream ofile;
        Account account(f,l,b);
        acc.insert(pair<int,Account>(account.getAccno(),account));
        ofile.open("Accounts_data.txt",ios::trunc);

        map<int,Account>::iterator itr;
        for(itr=acc.begin();itr!=acc.end();itr++)
        {
            ofile<<itr->second<<endl;
        }
        ofile.close();
        return account;
    }
    void BalEnquiry(int accno)
    {
        if (acc.find(accno)!= acc.end())
        {
            map<int,Account>::iterator itr=acc.find(accno);
            cout<<endl<<"Your Account Details"<<endl;
            cout<<itr->second;
        }
        else
        {
            cout << "Acc number invalid"<<endl;
        }

    }
    void Deposit(int accno,int amt)
    {
        if (acc.find(accno)!= acc.end())
        {
            map<int,Account>::iterator itr=acc.find(accno);
            itr->second.Deposit(amt);
            cout<<"Amount is Deposited"<<endl;
            cout<<itr->second;
        }
        else
        {
            cout << "Acc number invalid"<<endl;
        }
    }
    void Withdraw(int accno,int amt)
    {
        if(acc.find(accno)!= acc.end())
        {
            map<int,Account>::iterator itr=acc.find(accno);
            itr->second.Withdraw(amt);
            cout<<itr->second;
        }
        else
        {
            cout << "Acc number invalid"<<endl;
        }
    }
    void Closeacc(int accno)
    {
        if(acc.find(accno)!= acc.end())
        {
            map<int,Account>::iterator itr=acc.find(accno);
            acc.erase(accno);
        }
        else
        {
            cout << "Acc number invalid"<<endl;
        }
    }
    void Showallacc()
    {
        map<int,Account>::iterator itr;
        for(itr=acc.begin();itr!=acc.end();itr++)
        {
            cout<<"Account "<<itr->second<<endl;
        }
    }
    ~Bank()
    {
        ofstream ofile;
        ofile.open("Accounts_data.txt");
        map<int,Account>::iterator itr;
        for(itr=acc.begin();itr!=acc.end();itr++)
        {
            ofile<<itr->second;
        }
        ofile.close();
    }
};


int main()
{
    string f;
    string l;
    int bal;
    int amt;
    int accno;
    Account a;
    Bank b;
    int choice;

    cout<<"***Banking System***"<<endl<<endl;

    do
    {
        cout<<"\tSelect one option below : "<<endl;
        cout<<"\t1 Open an Account"<<endl;
        cout<<"\t2 Balance Enquiry"<<endl;
        cout<<"\t3 Deposit"<<endl;
        cout<<"\t4 Withdrawal"<<endl;
        cout<<"\t5 Close an Account"<<endl;
        cout<<"\t6 Show all Accounts"<<endl;
        cout<<"\t7 Quit"<<endl<<endl;
        cout<<"\tEnter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"Enter First Name: ";
                cin>>f;
                cout<<"Enter Last Name: ";
                cin>>l;
                cout<<"Enter initial Balance: ";
                cin>>bal;
                a=b.Openacc(f,l,bal);
                cout<<endl<<"Congratulations Account is Created"<<endl;
                cout<<a;
                break;
            case 2:
                cout<<"Enter Account Number: ";
                cin>>accno;
                //a=
                b.BalEnquiry(accno);
                break;
            case 3:
                cout<<"Enter Account Number: ";
                cin>>accno;
                cout<<"Enter amount to Deposit: ";
                cin>>amt;
                b.Deposit(accno,amt);
                /*cout<<"Amount is Deposited"<<endl;
                cout<<"Your Account Details"<<endl;
                cout<<a;*/
                break;
            case 4:
                cout<<"Enter Account Number: ";
                cin>>accno;
                cout<<"Enter amount to Withdraw: ";
                cin>>amt;
                b.Withdraw(accno,amt);
                cout<<"Amount is Withdrawn"<<endl;
                cout<<"Your Account Details"<<endl;
                cout<<a;
                break;
            case 5:
                cout<<"Enter Account Number: ";
                cin>>accno;
                b.Closeacc(accno);
                cout<<"Account Closed"<<endl;
                break;
            case 6:
                b.Showallacc();
                break;
            case 7:
                break;
            default:
                cout<<endl<<"Enter correct choice "<<endl;
                exit(0);
        }
    }while(choice!=7);

    return 0;
}

ofstream & operator<<(ofstream &ofs,Account &a)
{
    ofs<<a.accno<<endl;
    ofs<<a.Fname<<endl;
    ofs<<a.Lname<<endl;;
    ofs<<a.bal<<endl;
    return ofs;
}

ifstream & operator>>(ifstream &ifs,Account &a)
{
    ifs>>a.accno>>a.Fname>>a.Lname>>a.bal;
    return ifs;
}

ostream & operator<<(ostream &os,Account &a)
{
    os<<"Account Number: "<<a.accno<<endl;
    os<<"First Name: "<<a.Fname<<endl;
    os<<"Last Name: "<<a.Lname<<endl;
    os<<"Balance: "<<a.bal<<endl<<endl;
    return os;
}




