#include <iostream>
 using namespace std;

 class circle
 {
    private:
    int radius;
     
    public:

    circle(int r)
    {
        radius = r;
        float area = 3.14 * radius * radius;

        cout << "area of circle: " << area << endl;
    }
 };

 int main()
 {
    int r1;
    cout << "enter radius: ";
    cin >> r1;
    circle c1(r1);
    return 0;
 }
 