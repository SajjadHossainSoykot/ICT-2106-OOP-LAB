#include <iostream>
#include <conio.h>
using namespace std;
class test
{
    int a, b, c;

public:
    void getdata(int x, int y, int z);
    void operator-();
    void disp();
};
void test::getdata(int x, int y, int z)
{
    a = x;
    b = y;
    c = z;
}
void test::operator-()
{
    a = -a;
    b = -b;
    c = -c;
}
void test::disp()
{
    cout << "Value of A: " << a << endl;
    cout << "Value of B: " << b << endl;
    cout << "Value of C: " << c << endl;
}
int main()
{
    test obj;
    obj.getdata(-10, 20, 30);
    obj.disp();
    cout << "After Calling Unary Operator: " << endl;
    -obj;
    obj.disp();
    getch();
    return 0;
}