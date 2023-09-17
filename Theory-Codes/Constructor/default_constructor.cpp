#include <iostream>
#include<conio.h>
using namespace std;
class Test
{
    int a, b;

public:
    Test()
    {
        a = 0;
        b = 0;
    }
    void disp(void)
    {
        cout << "Value of A : " << a << endl;
        cout << "Value of B : " << b << endl;
    }
};

int main()
{
    Test t;
    t.disp();
    getch();
    return 0;
}
