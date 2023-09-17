#include <iostream>
#include <conio.h>
using namespace std;
class A
{
protected:
    int m;

public:
    void get_m(int);
};
void A::get_m(int x)
{
    m = x;
}

class B
{
protected:
    int n;

public:
    void get_n(int);
};

void B::get_n(int x)
{
   n=x;
}

class C: public A, public B
{
    int c;
    public:
    void add();
    void display();

};
void C :: add()
{
    c=m+n;
}
void C :: display()
{
    cout<<"Value of m: "<<m<<endl;
    cout<<"Value of n: "<<n<<endl;
    cout<<"Addition of m & n: "<<c<<endl;
}

int main()
{
    C obj;
    obj.get_m(100);
    obj.get_n(200);
    obj.add();
    obj.display();
    getch();
    return 0;
}