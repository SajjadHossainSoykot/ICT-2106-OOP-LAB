#include <iostream>
#include<conio.h>
using namespace std;
class Test
{
    int a, b;

public:
    Test(int x, int y)
    {
        a = x;
        b = y;
    }
    void disp(void)
    {
        cout << "Value of A : " << a << endl;
        cout << "Value of B : " << b << endl;
    }
};

int main()
{
    Test t(100,200);
    t.disp();
    getch();
    return 0;
}
