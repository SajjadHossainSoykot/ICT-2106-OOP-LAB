#include <iostream>
#include <cmath>
using namespace std;

// Function to evaluate sin(x) using Taylor series expansion
double sinFunction(double x) {
    double sum = x;
    double term = x;
    double accuracy = 0.0001;
    int i = 3;

    while (abs(term) >= accuracy) {
        term = term * (-x * x) / (i * (i - 1));
        sum += term;
        i += 2;
    }
    return sum;
}

// Function to evaluate SUM using the given formula
double sumFunction() {
    double sum = 0.0;
    double accuracy = 0.0001;
    int n = 1;
    while (true) {
        double term = pow(1.0 / n, n);
        if (term < accuracy) {
            break;
        }
        sum += term;
        n++;
    }
    return sum;
}

// Function to evaluate cos(x) using Taylor series expansion
double cosFunction(double x) {
    double sum = 1.0;
    double term = 1.0;
    double accuracy = 0.0001;
    int i = 2;
    while (abs(term) >= accuracy) {
        term = term * (-x * x) / (i * (i - 1));
        sum += term;
        i += 2;
    }
    return sum;
}

int main() {
    double x;

    // Evaluate sin(x)
    cout << "Enter the value of x: ";
    cin >> x;
    double sinResult = sinFunction(x);
    cout << "(a) sin(" << x << ") = " << sinResult << endl;

    // Evaluate SUM
    double sumResult = sumFunction();
    cout << "(b) SUM = " << sumResult << endl;

    // Evaluate cos(x)
    double cosResult = cosFunction(x);
    cout << "(c) cos(" << x << ") = " << cosResult << endl;

    return 0;
}
