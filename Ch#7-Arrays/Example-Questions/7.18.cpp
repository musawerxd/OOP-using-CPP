#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int arr[10][10], i, j, r, c, sum = 0;
	// Create a Matrix:
	cout << "Enter Number of Rows and Columns for Matrix: ";
	cin >> r >> c;
	cout << "Enter Elements for Matrix:\n";
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			cin >> arr[i][j];

	cout << endl
		 << "Matrix is:";
	for (i = 0; i < r; i++)
	{
		cout << endl;
		for (j = 0; j < c; j++)
			cout << setw(7) << arr[i][j];
	}

	cout << "\n\nSum of the Rows:\n";
	for (j = 0; j < c; j++)
	{
		arr[r][j] = 0;
		for (i = 0; i < r; i++)
			arr[r][j] += arr[i][j];
		cout << setw(7) << arr[r][j];
	}

	cout << "\n\nSum of the Columns: ";
	for (i = 0; i < r; i++)
	{
		arr[i][c] = 0;
		cout << endl;
		for (j = 0; j < c; j++)
			arr[i][c] += arr[i][j];
		cout << setw(7) << arr[i][c];
	}

	if (r == c) // for Square Matrix (Row = Column)
	{
		for (i = 0; i < r; i++)
			for (j = 0; j < c; j++)
				if (i == j)
				{
					sum += arr[i][j];
				}
	}
	cout << "\n\nSum of the Diagonal Elements is:  " << sum;
	return 0;
}
