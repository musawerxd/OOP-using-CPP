#include <iostream>
using namespace std;
int main()
{
	int a[10], i, min;
	for (i = 0; i < 10; i++)
	{
		cout << "Enter Value: ";
		cin >> a[i];
	}
	min = a[0];
	for (i = 0; i < 10; i++)
	{
		if (min > a[i]) //  if(a[i]<min)
			min = a[i];
	}
	cout << endl
		 << "Minimum Value: " << min;
	return 0;
}
