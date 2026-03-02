#include <iostream>
using namespace std;
int main()
{
	long min, val;
	cout << "Enter a Number: ";
	cin >> min;
	for (int i = 0; i < 19; i++)
	{
		cout << "Enter a Number: ";
		cin >> val;
		if (val < min)
			min = val;
	}
	cout << "\nMinimum Value is: " << min;
	return 0;
}
