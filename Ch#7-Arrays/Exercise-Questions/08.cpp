#include <iostream>
using namespace std;
int main()
{
	double arr[10], avg, tot = 0.0;
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter a Floating Point Number: ";
		cin >> arr[i];
		tot = tot + arr[i];
	}
	avg = tot / 10.0;
	cout << "\nThe Values Greater than " << avg << " are as follows: " << endl;
	for (int i = 0; i < 10; i++)
		if (arr[i] > avg)
			cout << arr[i] << endl;
	return 0;
}
