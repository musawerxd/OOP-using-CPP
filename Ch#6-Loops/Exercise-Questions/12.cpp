#include <iostream>
using namespace std;
int main()
{
	long num = 1;
	int i = 0;
	double sum = 0.0, avg = 0.0;
	for (; num != 9999; i++)
	{
		cout << "Enter a Number: ";
		cin >> num;
		if (num == 9999)
			break;
		sum += num;
	}
	avg = sum / i;
	cout << "Average is: " << avg;
	return 0;
}
