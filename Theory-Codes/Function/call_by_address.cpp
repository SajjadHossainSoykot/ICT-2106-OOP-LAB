#include<iostream>
using namespace std;
void swap(int *,int *);
int main()
{
    int s, a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Before Swap, A = "<<a<<" and B = "<<b<<endl;
    swap(&a,&b);
    cout<<"After Swap, A = "<<a<<" and B = "<<b<<endl;
    return 0;
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}