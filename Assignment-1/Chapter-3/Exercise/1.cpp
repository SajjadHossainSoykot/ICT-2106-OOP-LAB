#include<bits/stdc++.h>
using namespace std;
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int x, y;
    cin>>x>>y;
    cout<<"Before swap : "<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<"After swap : "<<x<<" "<<y<<endl;
}  
/* Output:

10 5
Before swap : 10 5
After swap : 5 10

*/