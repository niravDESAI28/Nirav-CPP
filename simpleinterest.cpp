#include <iostream>
 using namespace std;

 int main()
 {
    float p,r,n,si;

    cout << "enter principal amout: ";
    cin >> p;
    cout << "enter principal interest: ";
    cin >> r;
    cout << "enter principal years: ";
    cin >> n;

    si = (p * r * n) /100;
    cout << "simple interest" << si;
    return 0;
 }