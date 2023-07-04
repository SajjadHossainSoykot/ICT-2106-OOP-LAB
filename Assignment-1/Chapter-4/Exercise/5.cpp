#include <iostream>
using namespace std;
#define MAX(a, b, c) ((a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c))

int main() {
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    
    int largest = max(num1, num2, num3);
    cout << "The largest number is: " << largest << endl;
    return 0;
}
