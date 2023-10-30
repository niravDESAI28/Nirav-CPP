#include<iostream>
using namespace std;

class car
{
    public:
    static int a;
    int i = 0;

    car()
    {
        a++;
    }
    void display()
    {
        cout <<"display function call\n";
    }
    static void Display()
    {
        cout << "static function called\n";
    }
};

   int car :: a = 0;

int main()
{
    car c1;
    c1.display();

    car c2;
    c2.display();

    car c3;
    c3.display();

    cout <<"no. of time object call " << car :: a << endl;

    return 0;
}