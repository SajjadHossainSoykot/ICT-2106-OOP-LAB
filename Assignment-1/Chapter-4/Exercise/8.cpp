#include <iostream>
using namespace std;

double power(double m, int n = 2) {
    double result = 1.0;
    for (int i = 0; i < n; i++) {
        result *= m;
    }
    return result;
}

int power(int m, int n = 2) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= m;
    }
    return result;
}

int main() {
    double m_double;
    int m_int, n_int;

    cout << "Enter a double value (m): ";
    cin >> m_double;
    cout << "Enter an int value (n, default is 2): ";
    cin >> n_int;
    double result_double = power(m_double, n_int);
    cout << "Result (double): " << result_double << endl;
    
    cout << "Enter an int value (m): ";
    cin >> m_int;
    cout << "Enter an int value (n, default is 2): ";
    cin >> n_int;
    int result_int = power(m_int,n_int);
    cout << "Result (int): " << result_int << endl;

    return 0;
}
