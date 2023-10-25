#include<iostream>
using namespace std;
class base1
{
    protected:
    int a;

    public:
    void setA()
    {
        cout << "enter a: ";
        cin >> a;
    }
};

class derived1 : public base1 
{
    protected:
    int b;

    public:

    void setB()
    {
        cout << "enter b: ";
        cin >> b;
    }
    
    void Addition()
    {
        cout << "Addition of a and b is " << a + b << endl;
    }
};
    class derived2 : public base1
{
    
        protected:
        int c;
    
        public:

        void setC()
        {
            cout << "enter c: ";
            cin >> c;
        }

        void Product()
        {
             cout << "Addition of a and b is " << a * c << endl;
        }
    
};

int main()
{   
    derived1 d1;
    d1.setA();
    d1.setB();
    d1.Addition();

    derived2 d2;
    d2.setA();
    d2.setC();
    d2.Product();

    return 0;
}