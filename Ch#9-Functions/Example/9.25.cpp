#include <iostream>
#include <iomanip>
using namespace std;
struct Cricketer
{
    string playerName;
    int runs;
    int Innings;
    int timesNotout;
    float avg;
};
int main()
{
    Cricketer record[5];
    cout << "Enter 5 Player's Record with Following Details:  " << endl;
    cout << "1- Player's Name" << endl;
    cout << "2- Runs" << endl;
    cout << "3- Inning" << endl;
    cout << "4- Time's Not Out" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Player " << i + 1 << " Name: ";
        cin >> record[i].playerName;
        cout << "Enter Player " << i + 1 << " Runs: ";
        cin >> record[i].runs;
        cout << "Enter Player " << i + 1 << " Innigs: ";
        cin >> record[i].Innings;
        cout << "Enter Player " << i + 1 << " Times Not Out: ";
        cin >> record[i].timesNotout;
        record[i].avg = float(record[i].runs) / (record[i].Innings);
        cout << endl;
    }

    cout << left << setw(20) << "Player's Name"
         << setw(10) << "Runs"
         << setw(10) << "Inning"
         << setw(20) << "Time's Not Out"
         << setw(10) << "Average" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << left << setw(20) << record[i].playerName
             << setw(10) << record[i].runs
             << setw(10) << record[i].Innings
             << setw(20) << record[i].timesNotout
             << setw(10) << fixed << setprecision(2) << record[i].avg
             << endl;
    }

    return 0;
}