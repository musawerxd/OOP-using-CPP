#include <iostream>
using namespace std;
void Pascal(int num)
{
	int c,s=num;
	cout<<endl;
	for(int i=0; i<num; i++)
	{
		c=1;
		for(int j=1; j<=s; j++)
			cout<<" ";
		for(int k=0; k<=i; k++)
		{
			cout<<c<<" ";
			c = c*(i-k)/(k+1);
		}
		s--;
		cout<<endl;
	}
}

int main()
{
	int num;
	cout<<"Enter a Number: ";
	cin>>num;
	Pascal(num);
	return 0;
}
