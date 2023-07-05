#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int num1 = 123;
  int num2 = 456;

  // Outputting numbers with setw and endl
  cout << "Number 1: " << setw(6) << num1 << endl;
  cout << "Number 2: " << setw(6) << num2 << endl;

  // Outputting numbers without setw and endl
  cout << "Number 1: " << num1 << endl;
  cout << "Number 2: " << num2 << endl;

  return 0;
}
/* Output:

Number 1:    123
Number 2:    456
Number 1: 123
Number 2: 456

*/