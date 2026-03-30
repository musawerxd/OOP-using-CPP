#include <iostream>
using namespace std;
int main()
{
	int a[5],i;
	//for loop to input Values in Array:
	for(i=0;i<5;i++)
	{
		cout<<"Enter an integer: ";
		cin>>a[i];
	}
	cout<<"\nThe Values in Array are:\n";
	//for loop to output Values of Array:
	for(i=0;i<5;i++)
		cout<<a[i]<<endl;
	return 0;
}
