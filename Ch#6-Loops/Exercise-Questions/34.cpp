#include <iostream>
using namespace std;
int main()
{
	long st, end;
	int flag, r;
	cout << "Enter Starting Number: ";
	cin >> st;
	cout << "Enter Ending Number: ";
	cin >> end;
	if (st > end)
	{
		cout << "Invalid Input";
		exit(1);
	}
	cout << "\nSeries is:\n";
	for (int i = end; i >= st; i--)
	{
		flag = 0;
		for (int j = 2; j <= i - 1; j++)
		{
			r = i % j;
			if (r == 0)
				flag = 1;
		}
		if (flag == 0)
		{
			if (i % 10 == 7)
				cout << i << "\t";
		}
	}
	return 0;
}
