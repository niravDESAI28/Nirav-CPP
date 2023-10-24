#include <iostream>
using namespace std;

class test
{
    int l, w, h;

    public:
    void setdata(int a, int b, int c)
    {
        l = a;
        w = b;
        h = c;
    }
    int getvolume()
    {
        return l * w * h;
    }

    friend test operator+(test x, test y)
    {1
        test z;
        z.l = x.l + y.l;
        z.w = x.w + y.w;
        z.h = x.h + y.h;
        return z;
    }
};

int main()
{
    test t1, t2, t3;

    t1.setdata(5, 5, 5);
    cout << "area for t1 " << t1.getvolume() << "\n";

    t2.setdata(6, 6, 6);
    cout << "area for t2 " << t2.getvolume() << "\n";

    t3 = t1 + t2;
    cout << "area for t3 " << t3.getvolume() << endl;

    return 0;
}