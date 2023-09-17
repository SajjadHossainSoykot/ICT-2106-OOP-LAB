#include <iostream>
using namespace std;

class item
{
    int number; // private by default
    float cost; // private by default REN on
public:
    void getdata(int a, float b); // prototype declaration,

    // Function defined inside class
    void putdata(void)
    {
        cout << "Number : " << number << endl;
        cout << "Cost : " << cost << endl;
    }
};

// Member Function Definition..
void item::getdata(int a, float b)
{

    number = a; // private variables
    cost = b;   // directly used
}

// Main Program..

int main()
{

    item x; // create object x
    cout << "No Object x" << endl;
    x.getdata(100, 299.95); // call member function
    x.putdata();

    item y; // create object y
    cout << "No Object y" << endl;
    y.getdata(200, 175.50); // call member function
    y.putdata();
    return 0;
}
