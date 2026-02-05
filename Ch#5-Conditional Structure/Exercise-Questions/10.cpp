#include <iostream>
using namespace std;
int main()
{
	int temp;
	cout << "Enter Temperature: ";
	cin >> temp;
	if (temp > 35)
		cout << "\t Hot Day";
	else if (temp >= 25 && temp <= 35)
		cout << "\t Pleasant Day";
	else
		cout << "\t Cool Day";
	return 0;
}
