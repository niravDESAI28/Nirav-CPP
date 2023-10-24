#include <iostream>
using namespace std;
class base
{
    protected:
    int a;
    public:
    void setdata()
    {
        cout << "enter a: ";
        cin >> a;
    }
};

class derived: public base
{
    int b;
    public:
    void setdata()
    {
        cout << "enter b: ";
        cin >> b;
    }
    void getter()
    {
        cout << "addiction of a and b is: "<< a + b;
    }
};
int main()
{
    derived d;
    d.setdata();
    d.setdata();
    d.getter();   
}
