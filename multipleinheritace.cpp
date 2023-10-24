#include <iostream>
using namespace std;
 class base1
 {
    protected:
    int n1;

    public:

    void set()
    {
        cout << "enter n\t1: ";
        cin >> n1;
    }
 };

class base2
{
    protected:
    int n2;

    public:

   void setb()
   {
    cout << "enter n\t2: ";
    cin >> n2;
   }
};

    class derived : public base2, public base1
    {
        public:
         void calcmultiple()
    {
        cout << "multiplication of n1 and n2 is " << n1 * n2 << endl;
    }
    };


int main ()
{
    derived d;
    d.set();
    d.setb();
    d.calcmultiple();
    return 0;
}