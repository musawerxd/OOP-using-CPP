#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
int main()
{
	int i, j, r1, c1, r2, c2, a[20][20], b[20][20], c[20][20];
	cout << "Enter Number of Rows and Columns in First  Matrix:  ";
	cin >> r1 >> c1;
	cout << "Enter Number of Rows and Columns in Second Matrix:  ";
	cin >> r2 >> c2;
	if (r1 != r2 || c1 != c2)
	{
		cout << "\nMatrix Addition is not Possible.";
		exit(0);
	}
	cout << endl;
	for (i = 0; i < r1; i++)
		for (j = 0; j < c1; j++)
		{
			cout << "Enter the " << i << "x" << j << " Element of First  Matrix:  ";
			cin >> a[i][j];
		}
	cout << endl;
	for (i = 0; i < r2; i++)
		for (j = 0; j < c2; j++)
		{
			cout << "Enter the " << i << "x" << j << " Element of Second Matrix:  ";
			cin >> b[i][j];
		}
	cout << endl
		 << "First Matrix:";
	for (i = 0; i < r1; i++)
	{
		cout << endl;
		for (j = 0; j < c1; j++)
			cout << setw(5) << a[i][j];
	}
	cout << endl
		 << "\nSecond Matrix:";
	for (i = 0; i < r2; i++)
	{
		cout << endl;
		for (j = 0; j < c2; j++)
			cout << setw(5) << b[i][j];
	}
	cout << endl
		 << "\nSum of Above Two Matrix:";
	for (i = 0; i < r1; i++)
	{
		cout << endl;
		for (j = 0; j < c1; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			cout << setw(5) << c[i][j];
		}
	}
	return 0;
}
