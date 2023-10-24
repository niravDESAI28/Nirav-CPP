#include <iostream>
using namespace std;

class Base1 {
    public:
    int n;

    void setN() {
        cout << "enter n: ";
        cin >> n;
    }
};

class Base2 {
    public:
    int i;
};

class Derived : public Base1, public Base2 {
    public:
    void getCube() {
        for (i = 1; i <= n; i++) {
            cout << i * i * i << " ";
        }
    }
};

int main() {
    Derived d;
    d.setN();
    d.getCube();

    return 0;
}