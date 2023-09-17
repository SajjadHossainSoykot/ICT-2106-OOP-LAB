#include<iostream>
#include<conio.h>
using namespace std;
inline int max(int x, int y)
{
    return ((x>y)? x:y);
}
int main()
{
    int s, a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Greater value is: "<<max(a,b)<<endl;
    getch(); //This is use to keep the terminal open
    return 0;
}