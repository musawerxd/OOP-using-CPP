#include <iostream>
using namespace std;
void Add(long a[], long b[], long c[], long s)
{
	for(int i; i<s; i++)
		c[i] = a[i]+b[i];
}

int main()
{
	long a[5], b[5], c[5];
	cout<<"Enter Five Values in First Array: ";
	for(int i=0; i<5; i++)
		cin>>a[i];
	cout<<"Enter Five Values in Second Array: ";
	for(int i=0; i<5; i++)
		cin>>b[i];
	Add(a,b,c,5);
	cout<<"\nFirst Array:"<<endl;
	for(int i=0; i<5; i++)
		cout<<a[i]<<"\t";
	cout<<"\nSecond Array:"<<endl;
	for(int i=0; i<5; i++)
		cout<<b[i]<<"\t";
	cout<<"\nThird Array:"<<endl;
	for(int i=0; i<5; i++)
		cout<<c[i]<<"\t";
	return 0;
}
