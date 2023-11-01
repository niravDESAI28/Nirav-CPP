#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int max = 120;
    int min = 50;
    int rn;
    rn = max = rand() % (max - min + 1);
    cout << rn;

    return 0;
}