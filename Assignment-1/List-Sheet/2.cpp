#include <iostream>
using namespace std;

void changeValue(int* ptr) { //Call by Address
    *ptr = 10;  // Modifying the value pointed by ptr
}

int main() {
    int num = 5;
    cout << "Before function call: " << num << endl;
    changeValue(&num);
    cout << "After function call: " << num << endl;
    return 0;
}
