#include<iostream>
using namespace std;
class base 
{
    protected:
    int n;

    public:
    
    void setN()
    {
         cout << "enter n: ";
         cin >> n;
    }
};

class factorialnumber : public base 
{
    protected:
    int fact = 1;

    public:

    void calc()
    {
        for (int i = n; i >= 1; i--)
        {
            fact =  fact * i;
        }
        cout << "factorial: " << fact << endl << endl;
    }
};

class numbertable : public base
{
    public:

    void printtable()
    {
     
        for (int i = 1; i <= 10; i++)
        {
            cout << n << " * " << i << " = " << n * i << "\n";
        }
        
    }
};

int main ()
{
    factorialnumber ft;
    ft.setN();
    ft.calc();

    numbertable nt;
    nt.setN();
    nt.printtable();

    return 0;
}