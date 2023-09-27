#include <iostream>
 using namespace std;

 int main()
 {
    int n, i, a = 1;
    
    cout << "enter n: ";
    cin >> n;

      for ( i = 1; i <= n; i++)
   {
      cout << a * i << " ";
      a+=a;
   }
    
    return 0;
 }