#include <iostream>
 using namespace std;

 class Box
 {
    int l, w, h;
    public:
    void setData (int a, int b,int c)
    {
        l = a;
        h = b;
        w = c;
    }
    int getVolume()
    {
        return l * w * h;
    }

    Box operator+ (Box &n)
    {
        Box t;
        t.l = l + n.l;
        t.w = w + n.w;
        t.h = h + n.h;
        return t;
    }
 };

 int main()
 {
    Box b1, b2, b3, b4;
    b1.setData(2, 2, 2);
    cout << "Volume of Box b1 is: " << b1.getVolume() << endl;
    b2.setData(3, 3, 3);
    cout << "Volume of Box b2 is: " << b2.getVolume() << endl;

    b3 = b1 + b2;
    cout << "Volume of Box b3 is: " << b3.getVolume() << endl;

 }