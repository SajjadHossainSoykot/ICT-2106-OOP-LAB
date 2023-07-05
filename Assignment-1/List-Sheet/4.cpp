#include <iostream>
using namespace std;

inline int multiply(int a, int b) //inline function
{
    return a * b;
}

int main() {
    int num1 = 5, num2 = 10;
    cout << "Multiplication result: " << multiply(num1, num2) << endl;
    return 0;
}
