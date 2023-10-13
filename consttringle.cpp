#include <iostream>
using namespace std;

class Triangle
{
private:
    float base, height;

public:
    float b, h;
    Triangle()
    {
        base = b;
        height = h;

        cout << "enter base: ";
        cin >> b;
        cout << "enter height: ";
        cin >> h;
    }
    float areaOfTriangle()
    {
        float area = 0.5 * b * h;
        return area;
    }
};

int main()
{
    Triangle t1;
    float result = t1.areaOfTriangle();
    cout << "Area of Triangle: " << result << endl;
    return 0;
}