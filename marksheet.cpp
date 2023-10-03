#include <iostream>
using namespace std;

class Student
{
    private:
        int marks1, marks2, marks3, marks4, total, percentage;
    
    public:
        int m1 = marks1, m2 = marks2, m3 = marks3, m4 = marks4;
        int t = total, percent = percentage;

        void getTotal(int m1, int m2, int m3, int m4)
        {
            
            t = m1 + m2 + m3 + m4;
            cout << "Total Marks: " << t << endl;
        }
};

int main()
{
    Student s1[2];
    
    int maths[2], guj[2], eng[2], account[2];

    for (int i = 0; i < 2; i++)
    {
        cout << "enter maths: ";
        cin >> maths[i];
        cout << "enter gujarati: ";
        cin >> guj[i];
        cout << "enter english: ";
        cin >> eng[i];
        cout << "enter accounts marks: ";
        cin >> account[i];
    }

    for (int i = 0; i < 2; i++)
    {
        s1[i].getTotal(maths[i], guj[i], eng[i], account[i]);
    }

    return 0;
}   

