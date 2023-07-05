#include <iostream>
using namespace std;

void changeValue(int& num) { //Call By Reference
    num = 10;  // Modifying the value of num directly
}

int main() {
    int num = 5;
    cout << "Before function call: " << num << endl;
    changeValue(num);
    cout << "After function call: " << num << endl;
    return 0;
}
/* Output:

Before function call: 5
After function call: 10

*/
