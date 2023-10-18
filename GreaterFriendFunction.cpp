#include <iostream>
using namespace std;

class Greater
{
    friend Greater big(Greater, Greater);
    int n1, n2;

    public:
    void setData(int a, int b)
    {
        n1 = a, n2 = b;
    }
    int getBigger()
    {
        if (n1 > n2)
        {
            return n1;
        }
        else if (n2 > n1)
        {
            return n2;
        }
    }
};

Greater big(Greater m, Greater n)
{
    Greater g;
    g.n1 = m.n1;
    g.n2 = n.n2;
}

int main()
{
    int num1, num2;

    cout << "enter number1: ";
    cin >> num1;
    cout << "enter number2: ";
    cin >> num2;
    Greater c;
    c.setData(num1, num2);
    cout << "Greater Number " << c.getBigger() << endl;
    return 0;
}