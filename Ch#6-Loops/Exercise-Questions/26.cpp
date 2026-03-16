#include <iostream>
using namespace std;
int main()
{
	int n;
	long num, sum = 0;
	cout << "Enter a Number: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "Enter a Number: ";
		cin >> num;
		sum += num;
	}
	cout << "\nSum is: " << sum;
	return 0;
}
