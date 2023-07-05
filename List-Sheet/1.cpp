#include <iostream>
using namespace std;

void changeValue(int num) { //Call by value
    num = 10;  // Modifying the local copy of num
}

int main() {
    int num = 5;
    cout << "Before function call: " << num << endl;
    changeValue(num);
    cout << "After function call: " << num << endl;
    return 0;
}
