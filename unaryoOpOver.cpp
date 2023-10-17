#include <iostream>
using namespace std;

class Cube
{
    int a, b, c;

    public:
    void setData(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    int Getvolume()
    {
        return a * b * c ;
    }  
    Cube operator++()
    {
        Cube preCube;
        preCube.a = ++a;
        preCube.b = ++b;
        preCube.c = ++c;


    }
};

int main()
{
    Cube c1, c2;

    cout <<endl;

    c1.setData(5, 5, 5);
    cout << "Volume of a Cube for object c1 is " << c1.Getvolume() << "\n\n";

    ++c1;
    cout << "After Pre increment Volume of a Cube for object c1 is " << c1.Getvolume() << "\n\n";

    c2.setData( 10, 10, 10);
    cout << "Volume of a Cube for object c1 is " << c2.Getvolume() << "\n\n";    
    return 0;

}
