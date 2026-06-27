#include <iostream>
using namespace std;
void reverse(double a[])
{
	for(int i=9; i>=0; i--)
		cout<<a[i]<<"\t";
}

int main()
{
	double arr[10];
	for(int i=0; i<10; i++)
	{
		cout<<"Enter Floating Point Number: ";
		cin>>arr[i];
	}
	cout<<"\nOriginal Array"<<endl;
	for(int i=0; i<10; i++)
		cout<<arr[i]<<"\t";
	cout<<"\nReverse Array"<<endl;
	reverse(arr);
	return 0;
}
