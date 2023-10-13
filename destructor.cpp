#include <iostream>
using namespace std;

class doctor
{
    public:
    doctor()
    {
        cout << "hello doctor\n";
    }
    ~doctor()
    {
        cout << "destructor is running\n";
    }

};

int main()
{
    doctor d;
}