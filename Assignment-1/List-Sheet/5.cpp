#include <iostream>
using namespace std;

int calculateArea(int length, int width = 5) // Default Arguments
{
    return length * width;
}

int main()
{
    int length, width;
    cout << "Enter Custom length and width: ";
    cin >> length >> width;
    cout << "Area with default width (5): " << calculateArea(length) << endl;
    cout << "Area with custom width: " << calculateArea(length, width) << endl;
    return 0;
}
/* Output:

Enter Custom length and width: 10 3
Area with default width (5): 50
Area with custom width: 30

*/