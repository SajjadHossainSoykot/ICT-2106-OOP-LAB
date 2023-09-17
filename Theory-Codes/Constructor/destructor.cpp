#include <iostream>
#include <conio.h>
using namespace std;
class test
{
    static int count;

public:
    test()
    {
        count++;
        cout << count << " Object created" << endl;
    }
    ~test()
    {
        cout << count << " Object destroyed" << endl;
        count--;
    }
};
int test::count = 0;

int main()
{
    cout << "Main Block" << endl;
    test t1;
    {
        cout << "Block 1" << endl;
        test t2, t3;
        cout << "Exit from Block 1" << endl;
    }
    cout << "Exit from main" << endl;
    return 0;
}
