#include <iostream>
using namespace std;

int add(int a, int b) 
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int main()
{
    int num1 = 5, num2 = 10;
    double num3 = 2.5, num4 = 3.7;
    
    //Function Overloading
    cout << "Integer Addition: " << add(num1, num2) << endl;
    cout << "Double Addition: " << add(num3, num4) << endl;

    return 0;
}
/* Output:

Integer Addition: 15
Double Addition: 6.2

*/