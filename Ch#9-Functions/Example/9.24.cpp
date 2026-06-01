#include <iostream>
using namespace std;
struct Time
{
    int hours;
    int Minutes;
    int Seconds;
};
void addTime(Time t1, Time t2)
{
    int totalHours = t1.hours + t2.hours;
    int totalMinutes = t1.Minutes + t2.Minutes;
    int totalSeconds = t1.Seconds + t2.Seconds;

    totalMinutes += totalSeconds / 60;
    totalSeconds %= 60;
    totalHours += totalMinutes / 60;
    totalMinutes %= 60;

    cout << endl;
    cout << "Total Time is: " << totalHours << " : " << totalMinutes << " : " << totalSeconds;
}
int main()
{
    Time t1[2];
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter Hours for t1[" << i << "]  : ";
        cin >> t1[i].hours;
        cout << "Enter Minutes for t1[" << i << "]  : ";
        cin >> t1[i].Minutes;
        cout << "Enter Seconds for t1[" << i << "]  : ";
        cin >> t1[i].Seconds;
        cout << endl;
    }

    addTime(t1[0], t1[1]);
    return 0;
}