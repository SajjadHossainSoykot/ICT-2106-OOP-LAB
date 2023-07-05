#include <iostream>
using namespace std;

double power(double m, int n = 2) {
    double result = 1.0;
    for (int i = 0; i < n; i++) {
        result *= m;
    }
    return result;
}

int main() {
    double m;
    int n;

    cout << "Enter a number (m): ";
    cin >> m;

    cout << "Enter the power (n, default is 2): ";
    cin >> n;

    double result = power(m, n);
    cout << "Result: " << result << endl;

    return 0;
}
/* Output:

Enter a number (m): 3
Enter the power (n, default is 2): 3
Result: 27

*/