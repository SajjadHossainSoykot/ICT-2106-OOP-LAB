#include <iostream>
using namespace std;

class B; // Forward declaration

class A
{
    int data;
public:
    void setvalue (int value)
    {
        data = value;
    }

    friend void add(A, B);
};

class B
{
    int data;
public:
    void setvalue (int value)
    {
        data = value;
    }
    friend void add(A, B);
};


void add(A objA, B objB)
{
    cout<<"Sum of different obj value = "<< objA.data + objB.data<<endl;
}

int main()
{
    A a;
    B b;
    a.setvalue(5);
    b.setvalue(50);
    add(a,b);
    return 0;
}

