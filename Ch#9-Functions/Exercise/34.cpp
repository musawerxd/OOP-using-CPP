#include <iostream>
using namespace std;
void display(int a[5][5])
{
	cout<<"The Values in the Array:"<<endl;
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
			cout<<a[i][j]<<"\t";
		cout<<endl;
	}
}
void times2(int a[5][5])
{
	for(int i=0; i<5; i++)
		for(int j=0; j<5; j++)
			a[i][j] *= 2;
	cout<<endl;
}

int main()
{
	int arr[5][5];
	cout<<"Enter Values in 5x5 Array:  ";
	for(int i=0; i<5; i++)
		for(int j=0; j<5; j++)
			cin>>arr[i][j];
	cout<<endl;
	display(arr);
	times2(arr);
	cout<<"\tAfter times2() Function Call"<<endl;
	display(arr);
	return 0;
}
