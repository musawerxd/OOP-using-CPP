#include <iostream>
using namespace std;
int main()
{
	int a[10], i, max;
	for (i = 0; i < 10; i++)
	{
		cout << "Enter Value: ";
		cin >> a[i];
	}
	max = a[0];
	for (i = 0; i < 10; i++)
	{
		if (max < a[i]) // if(a[i]>max)
			max = a[i];
	}
	cout << endl
		 << "Maximum Value: " << max;
	return 0;
}
