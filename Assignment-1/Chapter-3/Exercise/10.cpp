#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

struct User {
    string name;
    int units;
    double charges;
};

double calculateCharges(int units) {
    double charges = 0.0;

    if (units <= 100) {
        charges = units * 0.60;
    } else if (units <= 200) {
        charges = 100 * 0.60 + (units - 100) * 0.80;
    } else if (units <= 300) {
        charges = 100 * 0.60 + 100 * 0.80 + (units - 200) * 0.90;
    } else {
        charges = 100 * 0.60 + 100 * 0.80 + 100 * 0.90 + (units - 300) * 1.00;
    }

    if (charges < 50.0) {
        charges = 50.0;
    }
    if (charges > 300.0) {
        charges += charges * 0.15;
    }
    return charges;
}

int main() {
    int numUsers;
    cout << "Enter the number of users: ";
    cin >> numUsers;

    vector<User> users(numUsers);

    cin.ignore(); // Ignore the newline character after reading the number of users

    // Read user data
    for (int i = 0; i < numUsers; ++i) {
        cout << "Enter the name of user " << i + 1 << ": ";
        getline(cin, users[i].name);
        cout << "Enter the number of units consumed by " << users[i].name << ": ";
        cin >> users[i].units;
        users[i].charges = calculateCharges(users[i].units);
        cin.ignore(); // Ignore the newline character after reading the units
    }

    // Display user data and charges
    cout << "User Data and Charges" << endl;
    cout << setw(20) << "Name" << setw(10) << "Units" << setw(10) << "Charges" << endl;
    for (const auto& user : users) {
        cout << setw(20) << user.name 
        << setw(10) << user.units 
        << setw(10) << fixed << setprecision(2) 
        << user.charges << endl;
    }

    return 0;
}
