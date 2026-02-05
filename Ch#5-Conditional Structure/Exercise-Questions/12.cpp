#include <iostream>
using namespace std;
int main()
{
	int h;
	float m;
	cout << "Enter 24 Hours Military Hours: ";
	cin >> h;
	cout << "Enter 24 Hours Military Minutes: ";
	cin >> m;
	if (h > 12 && h < 24)
	{
		h = h - 12;
		cout << "Standard Time: " << h << ":" << m << "PM";
	}
	else if (h == 24)
	{
		h = h - 12;
		cout << "Standard Time: " << h << ":" << m << "AM";
	}
	else if (h == 12)
		cout << "Standard Time: " << h << ":" << m << "PM";
	else
		cout << "Standard Time: " << h << ":" << m << "AM";
	return 0;
}
