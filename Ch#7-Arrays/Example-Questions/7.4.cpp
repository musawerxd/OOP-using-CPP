#include <iostream>
using namespace std;
int main()
{
	int day, mon, sum;
	int mono[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	cout << "Enter Month Number: ";
	cin >> mon;
	cout << "Enter Day Number: ";
	cin >> day;
	sum = day;
	for (int a = 0; a < mon - 1; a++)
		sum = sum + mono[a];
	cout << "\nThe Number of Days in This Year till date is: " << sum;
	return 0;
}
