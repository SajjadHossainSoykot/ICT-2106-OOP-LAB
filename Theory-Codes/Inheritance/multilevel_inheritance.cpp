#include <iostream>
#include <conio.h>
using namespace std;
class student
{
protected:
    int roll;

public:
    void get_roll(int);
    void put_roll();
};
void student::get_roll(int x)
{
    roll = x;
}
void student::put_roll()
{
    cout << "Roll Number : " << roll << endl;
}

class test : public student
{
protected:
    float m1, m2;

public:
    void get_marks(float, float);
    void put_marks();
};
void test::get_marks(float x, float y)
{
    m1 = x;
    m2 = y;
}
void test::put_marks()
{
    cout << "Marks in Sub1: " << m1 << endl;
    cout << "Marks in Sub2: " << m2 << endl;
}

class result : public test
{
    int total;

public:
    void display();
};
void result::display()
{
    total = m1 + m2;
    put_roll();
    put_marks();
    cout << "In Total : " << total << endl;
}

int main()
{
    result obj;
    obj.get_roll(101);
    obj.get_marks(53.3,70.1);
    obj.display();
    getch();
    return 0;
}