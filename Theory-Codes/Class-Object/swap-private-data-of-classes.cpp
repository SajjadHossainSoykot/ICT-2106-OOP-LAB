#include <iostream>
using namespace std;

class ClassB; // Forward declaration

class ClassA {
private:
    int numA;

public:
    ClassA(int n) : numA(n) {}
    void display() {
        cout << "ClassA data: " << numA << endl;
    }
    friend void swapData(ClassA&, ClassB&);
};

class ClassB {
private:
    int numB;

public:
    ClassB(int n) : numB(n) {}
    void display() {
        cout << "ClassB data: " << numB << endl;
    }
    friend void swapData(ClassA&, ClassB&);
};

void swapData(ClassA& a, ClassB& b) {
    int temp = a.numA;
    a.numA = b.numB;
    b.numB = temp;
}

int main() {
    ClassA objA(5);
    ClassB objB(10);

    cout << "Before swapping:\n";
    objA.display();
    objB.display();

    swapData(objA, objB);

    cout << "\nAfter swapping:\n";
    objA.display();
    objB.display();

    return 0;
}
