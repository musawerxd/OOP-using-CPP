#include <iostream>
using namespace std;
int main()
{
	long arr[10];
	int n, c;
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter an Integer: ";
		cin >> arr[i];
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == -1)
			continue;
		n = arr[i];
		c = 1;
		for (int j = i + 1; j < 10; j++)
			if (arr[j] == n)
			{
				c++;
				arr[j] = -1;
			}
		cout << n << " is Stored " << c << " Times in the Array." << endl;
	}
	return 0;
}
