#include <iostream>
using namespace std;
void factor(long num)
{
	int f=2;
	cout<<"\nPrime Factors of "<<num<<" are:"<<endl;
	while(f<=num)
		if(num%f==0)
		{
			num/=f;
			cout<<f<<"\t";
		}
		else
			f++;
}

int main()
{
	long num;
	cout<<"Enter a Positive Integer: ";
	cin>>num;
	factor(num);
	return 0;
}
