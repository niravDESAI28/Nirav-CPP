#include <iostream>
using namespace std;

class Rect
{
    int l, w;

    public:
    friend Rect Add(Rect, Rect);
    void setData(int a, int b)
    {
        l = a, w = b;
    }

    int getArea()
    {
        return l * w;
    }
};

Rect Add(Rect m, Rect n)
{
    Rect t;
    t.l = m.l + n.l;
    t.w = m.w + n.w;
    return t;
}

int main()
{
    Rect a, b, c;
    a.setData(4, 5);
    cout << "Area of Rectangle A is " << a.getArea() << endl;
    b.setData(7, 8);
    cout << "Area of Rectangle B is " << b.getArea() << endl;

    c = Add(a, b);
    cout << "Area of Rectangle C is " << c.getArea() << endl;
    return 0;
}