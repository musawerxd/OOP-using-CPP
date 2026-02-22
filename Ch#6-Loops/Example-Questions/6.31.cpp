#include <iostream>
using namespace std;
int main()
{
	long num, c, mid, sum = 0;
	cout << "Enter a Number: ";
	cin >> num;
	mid = num / 2;
	for (c = 1; c <= mid; c++)
	{
		if (num % c == 0)
			sum = sum + c;
	}
	if (sum == num)
		cout << num << " is a Perfect Number.";
	else
		cout << num << " is not a Perfect Number.";
	return 0;
}
