#include <iostream>
using namespace std;
void display(int num) {
    cout << "Integer: " << num << endl;
}

void display(double num) {
    cout << "Double: " << num << endl;
}

void display(const string& str) {
    cout << "String: " << str << endl;
}

int main() {
    int num = 10;
    double pi = 3.14159;
    string message = "Hello, World!";

    display(num); // Calls the display function for integer argument
    display(pi); // Calls the display function for double argument
    display(message); // Calls the display function for string argument

    return 0;
}
