#include<iostream>
using namespace std;
class bankAC
{
    public:
    int amt,w,d;
    static int total;

    bankAC(int b)
    {
        amt=b;
        total+=amt;
    }

    void deposit(int a)
    {
        d=a;
        amt= amt+d ;
        total= total+d;
        cout<<amt<<endl;
    }

    void withdraw(int c)
    {
        w=c;
        amt=amt-w;
        total=total-w;
        cout<<amt<<endl;
    }

    static void totalbal()
    {
        cout<<"total balance is: "<<total<<endl;
    }
};

int bankAC :: total=0;
int main()
{
    bankAC b1(1500);
    bankAC b2(1500);

    b1.deposit(5000);
    b2.withdraw(1000);

    cout<<bankAC::total << endl;
}