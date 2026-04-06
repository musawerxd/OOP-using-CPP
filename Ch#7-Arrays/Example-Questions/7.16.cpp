#include <iostream>
using namespace std;
int main()
{
	int arr[2][4] = {{15, 21, 9, 84}, {33, 72, 18, 47}}, i, j, max, min;
	max = min = arr[0][0];
	for (i = 0; i < 2; i++)
		for (j = 0; j < 4; j++)
		{
			if (arr[i][j] > max)
				max = arr[i][j];
			else if (arr[i][j] < min)
				min = arr[i][j];
		}
	cout << "Maximum Value: " << max << endl
		 << "Minimum Value: " << min;
	return 0;
}
