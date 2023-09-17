#include <iostream>
#include<conio.h>
#include<string>
using namespace std;

class binary {
    string s;

public:
    void read() {
        cout << "Enter binary number: ";
        cin >> s;
    }

    void chk_bin(void) {
        for (int i = 0; i < s.length(); i++) {
            if (s.at(i) != '0' && s.at(i) != '1') {
                cout<<"Incorrect Binary. Exiting Program"<<endl;
                exit(0);
            }
        }

    }

    void ones() {
        chk_bin(); //Calling member function
        for (int i = 0; i < s.length(); i++) {
            s.at(i) = (s.at(i) == '0') ? '1' : '0';
        }
    }

    void displayones() {
        ones(); //Calling member function
        cout << "1's complement: " << s << endl;
    }
};

int main() {
    binary b;
    b.read();
    b.displayones();
    return 0;
}
