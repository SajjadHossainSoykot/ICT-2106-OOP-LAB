#include <iostream>
using namespace std;

void printMessage(const string& message) {
    cout << message << endl;
}

void printMessage(const string& message, int numTimes) {
    for (int i = 0; i < numTimes; i++) {
        cout << message << endl;
    }
}

int main() {
    string message = "Hello, World!";

    // Call the function with one argument
    printMessage(message);

    // Call the function with two arguments
    printMessage(message, 3);

    return 0;
}
/* Output:

Hello, World!
Hello, World!
Hello, World!
Hello, World!

*/