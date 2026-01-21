#include <iostream>
using namespace std;
int main()
{
	int we, dy, hrs;
	cout << "Enter Number of Hours: ";
	cin >> hrs;
	we = hrs / 168;
	hrs = hrs % 168;
	dy = hrs / 24;
	hrs = hrs % 24;
	cout << "Weeks: " << we << endl;
	cout << "Days: " << dy << endl;
	cout << "Hours: " << hrs;
	return 0;
}
