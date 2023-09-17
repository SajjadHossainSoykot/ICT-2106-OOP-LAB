#include <iostream>
#include <conio.h>
using namespace std;
class A
{
    int a;

public:
    void getval_a(int);
    int get_a();
};
class B : public A
{
    int b, c;

public:
    void getval_b(int);
    void add();
    void dispval();
};

void A::getval_a(int x)
{
    a = x;
}
int A::get_a()
{
    return a;
}
void B::getval_b(int x)
{
    b = x;
}
void B::add()
{
    c = get_a();
    c = c + b;
}
void B::dispval()
{
    cout << "Value of A : " << get_a() << endl;
    cout << "Value of B : " << b << endl;
    cout << "Value of C : " << c << endl;
}

int main()
{
    int a, b;
    B obj;
    cout << "Enter the value of A and B: ";
    cin >> a >> b;
    obj.getval_a(a);
    obj.getval_b(b);
    obj.add();
    obj.dispval();
    getch();
    return 0;
}