#include <iostream>
#include <conio.h>
using namespace std;
class test
{
private:
    int a, b;

public:
    test();      // Default constructor
    test(int x); // Parameterized constructor
    test(int x, int y);
    void disp();
};
test::test()
{
    a = 0;
    b = 0;
}
test::test(int x)
{
    a = b = x;
}
test::test(int x, int y)
{
    a = x;
    b = y;
}
void test::disp()
{
    cout << "Value of A : " << a << endl;
    cout << "Value of B : " << b << endl;
}
int main()
{
    test t1;
    test t2(100);
    test t3(100, 200);
    cout << "Object t1 " << endl;
    t1.disp();
    cout << "Object t2 " << endl;
    t2.disp();
    cout << "Object t3 " << endl;
    t3.disp();
    getch();
    return 0;
}
