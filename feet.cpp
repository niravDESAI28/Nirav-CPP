#include <iostream>
 using namespace std;

 int main()

 {
    int feet,inches;

    std::cout << "enter feet: ";
    std::cin >> feet;

    inches = feet * 12;
    std::cout << "inches:" << inches; 
    return 0;
 }