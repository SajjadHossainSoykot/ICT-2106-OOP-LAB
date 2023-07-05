#include <iostream>
using namespace std;
#define MAX(a,b,c) ((a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c))

int main() {
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    
    int largest = MAX(num1, num2, num3);
    cout << "The largest number is: " << largest << endl;
    return 0;
}
/* Output:

Enter three numbers: 2 5 3
The largest number is: 5

*/