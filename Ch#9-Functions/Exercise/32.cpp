#include <iostream>
using namespace std;
void Change(long a[], int n)
{
	for(int i=0; i<n; i++)
		if(a[i]%5==0)
			a[i] = a[i]/5;
		else
			a[i] = a[i]*2;
}

int main()
{
	long arr[5];
	for(int i=0; i<5; i++)
	{
		cout<<"Enter an Integer: ";
		cin>>arr[i];
	}
	cout<<"\nOriginal Array:"<<endl;
	for(int i=0; i<5; i++)
		cout<<arr[i]<<"\t";
	Change(arr,5);
	cout<<"\nChanged Array:"<<endl;
	for(int i=0; i<5; i++)
		cout<<arr[i]<<"\t";
	return 0;
}
