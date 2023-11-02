#include <iostream>
using namespace std;

class Student
{
    private:
    int mark1, mark2, mark3;

    public:
    int id, m1, m2, m3;
    string name;

    Student()
    {
        cout << "enter id of a student: ";
        cin >> id;
        cout << "enter name of a student: ";
        cin >> name;
        cout << "enter mark1: ";
        cin >>m1;
        cout << "enter mark2: ";
        cin >>m2;
        total = m1 + m2;
    }

    ~Student()
    {
        cout << "student " << name << " object is being destructor" << endl;  
    } 

    void ShowData()
    
     {
        cout << "\nStudent id is " << id;
        cout << "\nStudent name is " << name;
        cout << "\nEng\tMaths\tTotal";
        cout << "\n" << m1 << "\t" << m2 << "\t" << total;
        cout << endl;
    }
};

int main()
{
    Student s1, s2, s3;
    s1.ShowData();
    s2.ShowData();
    // s3.showData();
    return 0;
}
