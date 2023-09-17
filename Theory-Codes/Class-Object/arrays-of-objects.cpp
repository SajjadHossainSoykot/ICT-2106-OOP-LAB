#include <iostream>
#include <string>
using namespace std;

class employee {
private:
    string name;
    int age;

public:
    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void putData() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
const int size = 3;

int main() {
    employee manager[size];

    cout << "Enter information for " << size << " manager:\n";
    for (int i = 0; i < size; i++) {
        cout << "Manager " << (i + 1) << ":\n";
        manager[i].getData();
    }

    cout << "\nManager Information:\n";
    for (int i = 0; i < size; i++) {
        cout << "Manager " << (i + 1) << ": ";
        manager[i].putData();
    }

    return 0;
}
