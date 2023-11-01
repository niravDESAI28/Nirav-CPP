#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string str = "Hello world";
    ofstream file("file1.txt", ios::app);
    if (file.is_open())
    {
        file << "Hello" << endl;
        file << "World" << endl;
        file.close();
    }
    return 0;
}