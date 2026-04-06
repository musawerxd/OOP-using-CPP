#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int temp[3][7][4], i, j, k, max, min, sum = 0;
	float avg;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 7; j++)
			for (k = 0; k < 4; k++)
			{
				cout << "Enter Temperature: ";
				cin >> temp[i][j][k];
			}
	max = min = temp[0][0][0];
	for (i = 0; i < 3; i++)
		for (j = 0; j < 7; j++)
			for (k = 0; k < 4; k++)
			{
				sum = sum + temp[i][j][k];
				if (temp[i][j][k] > max)
					max = temp[i][j][k];
				else if (temp[i][j][k] < min)
					min = temp[i][j][k];
			}
	avg = sum / 84.0;
	cout << "\nMaximum Temperature of the Month:  " << max << endl;
	cout << "Minimum Temperature of the Month:  " << min << endl;
	cout << fixed << setprecision(2) << "Average Temperature of the Month:  " << avg;
	return 0;
}
