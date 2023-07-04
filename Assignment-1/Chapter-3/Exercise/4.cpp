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
