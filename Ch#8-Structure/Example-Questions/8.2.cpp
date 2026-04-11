#include <iostream>
using namespace std;
struct Birth
{
	int day, mon, year;
};
int main()
{
	Birth b;
	cout << "Enter Day of Birth: ";
	cin >> b.day;
	cout << "Enter Month of Birth: ";
	cin >> b.mon;
	cout << "Enter Year of Birth: ";
	cin >> b.year;
	cout << "\nYour Date of Birth is: " << b.day << "/" << b.mon << "/" << b.year;
	return 0;
}
