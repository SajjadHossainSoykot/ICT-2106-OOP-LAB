#include <iostream>
using namespace std;
class temp
{
public:
    double fahrenheit;
    double celsius;
    void convert()
    {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> fahrenheit;
        celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
        cout << "Temperature in Celsius: " << celsius << endl;
    }
};
int main()
{
    temp t;
    t.convert();
    return 0;
}
