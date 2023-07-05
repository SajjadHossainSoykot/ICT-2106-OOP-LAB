#include <iostream>
using namespace std;
void printMessage(const string& message = "Hello, World!") {
    cout << message << endl;
}

int main() {
    printMessage(); // Will print the default message "Hello, World!"
    printMessage("Welcome!"); // Will print the provided message "Welcome!"

    return 0;
}
/* Output:

Hello, World!
Welcome! 

*/
