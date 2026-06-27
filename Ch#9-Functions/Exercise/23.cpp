#include <iostream>
using namespace std;
long Max(long a[])
{
	int m;
	for(int i=1; i<5; i++)
		if(a[i] > m)
			m = a[i];
	return m;
}

int main()
{
	long arr[5], max;
	for(int i=0; i<5; i++)
	{
		cout<<"Enter an Integer: ";
		cin>>arr[i];
	}
	max = Max(arr);
	cout<<"The Maximum Number in Array is: "<<max;
	return 0;
}
