#include <iostream>
using namespace std;
class Person {
public:
  string name;
  int age;
  void displayInfo() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
  }
};

int main() {
  Person person;
  person.name = "John Doe";
  person.age = 25;
  person.displayInfo();
  return 0;
}
