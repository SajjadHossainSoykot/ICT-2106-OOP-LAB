
#include <iostream>
using namespace std;
void swap(int, int);
int main()
{
    int s, a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    add(a, b);
    cout << "After Swap Addition = " << add(a, b) << endl;
    return 0;
}
int add(int x, int y)
{
    return x+y;
}
//Hello