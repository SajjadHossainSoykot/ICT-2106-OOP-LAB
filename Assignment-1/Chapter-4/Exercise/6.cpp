#include <iostream>
using namespace std;

inline int max(int a, int b, int c) {
    return (a > b && a > c) ? a : (b > c ? b : c);
}

int main() {
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int largest = max(num1, num2, num3);
    cout << "The largest number is: " << largest << endl;

    return 0;
}
