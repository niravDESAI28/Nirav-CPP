#include<iostream>
using namespace std;

class cookie
{
    public:
    int sugar;

    cookie(int sugar)
    {
        this -> sugar = sugar;
    }
    void describe()
    {
        cout << "sugar in cookie is " << sugar << endl;
    }    
};

int main()
{
    cookie chocochip(50);
    chocochip.describe();
    cookie oatcookie(21);
    oatcookie.describe();

    return 0;
}