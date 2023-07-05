#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double P, r, V;
    int n;
    cout << "Enter P, r, n: ";
    cin >> P >> r >> n;
    cout << "P\t\tr\t\tn\t\tV" << endl;
    cout << "-----------------------------------" << endl;
    for (int i = 1; i <= n; i++)
    {
        V = P * pow((1 + r), i);
        cout << fixed << setprecision(2);
        cout << P << "\t\t" << r << "\t\t" << i << "\t\t" << V << endl;
        P = V;
    }
    return 0;
}
/* Output:

Enter P, r, n: 1000 .15 3
P               r               n               V
-----------------------------------
1000.00         0.15            1               1150.00
1150.00         0.15            2               1520.87
1520.87         0.15            3               2313.06

*/