#include <iostream>
using namespace std;
int main()
{
	float num, avg, min, max, sum = 0;
	int c = 0;
	cout << "Enter a Number: ";
	cin >> num;
	max = num;
	min = num;
	while (num >= 0)
	{
		sum = sum + num;
		c++;
		if (num > max)
			max = num;
		else if (num < min)
			min = num;
		cout << "Enter a Number: ";
		cin >> num;
	}
	if (c == 0)
		cout << "No Positive Number entered.";
	else
	{
		avg = sum / c;
		cout << "\nYou Entered " << c << " Numbers." << endl;
		cout << "Average: " << avg << endl;
		cout << "Maximum Number: " << max << endl;
		cout << "Minimum Number: " << min;
	}
	return 0;
}
