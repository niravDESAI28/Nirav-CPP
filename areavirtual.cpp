#include <iostream>
using namespace std;

class Shape
{
    public:

    virtual void Area()
    {
        cout << "enter shape name ";
    }
};

class Circle : public Shape
{
    public:
    int r;

    void Area() override
    {
        cout << "enter radius: ";+
        cin >> r;

        cout << "Area of circle " << 3.14 * r * r << endl;
    }
};

class Triangle : public Shape 
{
    public:

    int base, height;

    void Area() override
    {
        cout << "enter base: ";
        cin >> base;
        cout << "enter height: ";
        cin >> height;

        cout << "Area of Triangle " << 0.5 * base * height << endl;
    }
};

class Square : public Shape
{
    public:
    int side;

    void Area() override 
    {
        cout << "enter side: ";
        cin >> side;

        cout << "Area of Square " << side * side << endl;
    }
};

int main()
{
    Shape* shape;
    Circle cr;
    Triangle t;
    Square sq;

    shape = &cr;
    shape->Area();

    shape = &sq;
    shape->Area();

    return 0;
}

