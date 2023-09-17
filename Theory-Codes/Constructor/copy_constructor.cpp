#include <iostream>
#include <conio.h>
using namespace std;
class test
{
private:
    int code;
    float price;

public:
    // Parameterized constructor
    test(int c, float f);
    // Copy constructor
    test(const test &t);
    void disp();
};
test::test(int c, float p)
{
    code = c;
    price = p;
}
test::test(const test &t)
{
    code = t.code;
    price = t.price;
}
void test::disp()
{
    cout << " Code : " << code;
    cout << " Price : " << price;
    cout << endl;
}
int main()
{
    test t1(101, 50.6);
    test t2(t1);
    test t3 = t2;
    cout << "t1 object ";
    t1.disp();
    cout << "t2 object ";
    t2.disp();
    cout << "t3 object ";
    t3.disp();
    getch();
    return 0;
}
