#include <iostream>
#include <conio.h>
using namespace std;
int add(int x = 10, int y = 20, int z = 30)
{
    return x + y + z;
}
int main()
{
    cout << add() << endl;
    cout << add(100) << endl;
    cout << add(50,50) << endl;
    cout << add(100,100,100) << endl;
    getch();
    return 0;
}
