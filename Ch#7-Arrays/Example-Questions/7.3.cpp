#include <iostream>
using namespace std;
int main()
{
	int a[5], i, sum = 0;
	float avg = 0.0;
	// for loop to input Values in Array:
	for (i = 0; i < 5; i++)
	{
		cout << "Enter Value: ";
		cin >> a[i];
		sum = sum + a[i];
	}
	avg = sum / 5.0;
	cout << "\nSum is: " << sum;
	cout << "\nAverage is: " << avg;
	return 0;
}
