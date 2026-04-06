#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int arr[4][4], i, j, sum = 0;
	cout << "Enter Elements for Matrix:\n";
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			cin >> arr[i][j];

	cout << endl
		 << "Matrix is:";
	for (i = 0; i < 4; i++)
	{
		cout << endl;
		for (j = 0; j < 4; j++)
			cout << setw(7) << arr[i][j];
	}
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			if (i == j)
			{
				sum += arr[i][j];
			}
	cout << "\n\nSum of the Diagonal Elements is:  " << sum;
	return 0;
}
