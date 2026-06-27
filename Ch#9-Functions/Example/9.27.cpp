#include <iostream>
using namespace std;
struct Time
{
    int Hours;
    int Minutes;
    int Seconds;
};
void setTime(int h, int m, int s, Time &t)
{
    t.Hours = h;
    t.Minutes = m;
    t.Seconds = s;
}
void incrementTime(Time &t, int seconds)
{
    t.Seconds += seconds;
    t.Minutes += t.Seconds / 60;
    t.Seconds %= 60;
    t.Hours += t.Minutes / 60;
    t.Minutes %= 60;
    t.Hours %= 24;
}
void ShowTime(Time t)
{
    cout << t.Hours << " : " << t.Minutes << " : " << t.Seconds << endl;
}

int main()
{
    Time Now;
    setTime(23, 59, 0, Now);
    cout << "Time after setting : ";
    ShowTime(Now);
    incrementTime(Now, 30);
    cout << "Time after Increment of 30 seconds : ";
    ShowTime(Now);
    incrementTime(Now, 60);
    cout << "Time after Increment of 60 seconds : ";
    ShowTime(Now);
    return 0;
}