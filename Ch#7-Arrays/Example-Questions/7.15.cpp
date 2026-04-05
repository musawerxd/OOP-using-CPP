#include <iostream>
using namespace std;
int main()
{
	int i, j, arr[2][3] = {15, 21, 9, 84, 33, 72};
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << "\t\t";
		cout << endl;
	}
	return 0;
}
