#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double a = 1.8564;
    int result1, result2, ans;

    result1 = floor(a);
    result2 = ceil(a);
    ans = round(a);
    
      
    cout << result2 << endl;
    cout << result1 << endl;
    cout << ans << endl;
    cout << abs(-120) << endl;

    return 0;
 
}