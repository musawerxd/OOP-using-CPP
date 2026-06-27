#include <iostream>
using namespace std;
void Prime(long num)
{
	int p=1;
	for(int i=2; i<=num/2; i++)
		if(num%i==0)
		{
			p=0;
			break;
		}
		if(p==1)
			cout<<num<<" is a Prime Number.";
		else
			cout<<num<<" is not a Prime Number.";
}

int main()
{
	long num;
	cout<<"Enter an Ineger: ";
	cin>>num;
	Prime(num);
	return 0;
}
