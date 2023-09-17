#include<iostream>
using namespace std;
//Recursion (Factorial of Number)
long fact(int n)
{
    if(n==0)return 1;
    return (n*fact(n-1));
}
int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    cout<<"Factorial = "<<fact(n);
}