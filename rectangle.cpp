#include <iostream>
 using namespace std;

class rectangle 
 {
private:
    int lenght, height;

public:
    int l = lenght, h = height;

    int area (int l , int h)
    {
        return l*h;
    } 

    int cric (int l , int h)
    {
        return 2*(l+h);
    }
 };

 int main ()
 {
    int a,b;
    cin>>a>>b;

    rectangle r1;
    cout <<r1.area(a,b)<<endl;
    cout <<r1.cric(a,b);
    return 0;
 }