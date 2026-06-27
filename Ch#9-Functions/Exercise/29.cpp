#include <iostream>
using namespace std;
long Min(long num[])
{
	long m=num[0];
	for(int i=1; i<5; i++)
		if(num[i] < m)
			m = num[i];
	return m;
}

int main()
{
	long arr[5], min;
	for(int i=0; i<5; i++)
	{
		cout<<"Enter an Integer: ";
		cin>>arr[i];
	}
	min = Min(arr);
	cout<<"Minimum Number in the Array: "<<min;
	return 0;
}
