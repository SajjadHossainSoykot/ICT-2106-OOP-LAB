#include <iostream>
using namespace std;
// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat is meowing." << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;

    cout << "Dog actions:" << endl;
    dog.eat();
    dog.bark();

    cout << "\nCat actions:" << endl;
    cat.eat();
    cat.meow();

    return 0;
}
