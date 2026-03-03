#include <iostream>
using namespace std;
int main()
{
	unsigned long num, n, c, sum, mid;
	cout << "Enter Number to specify Perfect Number range: ";
	cin >> num;
	cout << endl
		 << "Series of Perfect Numbers up to (" << num << ") is:\n";
	if (num < 6)
		cout << "\tSorry! There is no Perfect Number in this Range.";
	else
		for (n = 6; n <= num; n++)
		{
			mid = n / 2;
			sum = 0;
			for (c = 1; c <= mid; c++)
			{
				if (n % c == 0)
					sum = sum + c;
			}
			if (sum == n)
				cout << n << "\t";
		}
	return 0;
}
