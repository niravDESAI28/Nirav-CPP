#include<iostream>
using namespace std;

class pet
{
    public:
    virtual void print() 
    {
        cout << "enter sound of animal";
    }
};

class dog : public pet
{
    public:

    void print() override
    {
        cout << "dog barks " <<endl;
    }
};

class cat : public pet
{
    public:

    void print() override
    {
        cout << "cat meows " <<endl;
    }
};

int main()
{
    pet* mypet;

    dog mydog;
    cat mycat;

    mypet = &mydog;
    mypet->print();

    mypet = &mycat;
    mypet->print();

    return 0;
}