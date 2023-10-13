#include <iostream>
using namespace std;

class Student
{
    private:
    int rollno;
    string stud_name;

    public:
    int rno;
    string name;

    void input()
    {
        cout << "enter roll number: ";
        cin >> rno;
        cout << "enter name of student: ";
        cin >> name;
    }
    ~Student()
    {
        rno = rollno;
        name = stud_name;
    }

    void display()
    {
        cout << "Roll Number of a student: " << rno << endl;
        cout << "Name of a student: " << name << endl;
    }
    ~Student()
    {
        cout << "Destructor is running\n";
    }
};

int main()
{
    Student std;
    std.input();
    std.display();
    return 0;
}