#include <iostream>
using namespace std;

class Test
{
    int maths, science, english;

    public:

    void setData(int m, int s, int e)
    {
        maths = m;
        science = s;
        english = e;
    }

    int getTotal()
    {
        return maths + science + english;
    }
};

int main()
{
    Test t[3];
    int mark1, mark2, mark3;

    for (int i = 0; i < 3; i++)
    {
        cout << "enter marks of maths: ";
        cin >> mark1;
        cout << "enter marks of science: ";
        cin >> mark2;
        cout << "enter marks of english: ";
        cin >> mark3;

        cout << endl;

        t[i].setData(mark1, mark2, mark3);
    }

    cout << endl << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "Total Marks: " << t[i].getTotal() << "\n";
    }
    return 0;
}