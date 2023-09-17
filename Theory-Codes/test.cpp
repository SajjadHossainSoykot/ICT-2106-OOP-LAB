#include <iostream>
using namespace std;

class time
{
private:
    int hours;
    int minutes;

public:
    void gettime(int h, int m)
    {
        hours = h;
        minutes = m;
    }

    void puttime()
    {
        cout << hours << " hours " << minutes << " minutes"<<endl;
    }
    friend time sum(time, time); //using friend function
};

time sum(time t1, time t2) //object as argument
{
    time temp;
    temp.minutes = t1.minutes + t2.minutes;
    temp.hours = temp.minutes / 60;
    temp.minutes = temp.minutes % 60;
    temp.hours = temp.hours + t1.hours + t2.hours;
    return temp;  //return object
}

int main()
{
    time T1, T2, T3;
    T1.gettime(2, 45);
    T2.gettime(3, 30);
    T3=sum(T1, T2);
    cout << "T1 = "; T1.puttime();
    cout << "T2 = "; T2.puttime();
    cout << "T3 = "; T3.puttime();
    return 0;
}
