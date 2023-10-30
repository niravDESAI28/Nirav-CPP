#include <iostream>
using namespace std;

template <class  t>
t sum (t x, t y)
{
    return x + y;
}

int main ()
{
    cout << sum(1 ,2) << endl;
    cout << sum(24.5 ,1.5) << endl;
    return 0;
}