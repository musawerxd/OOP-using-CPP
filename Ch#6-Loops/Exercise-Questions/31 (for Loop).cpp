#include <iostream>
using namespace std;
int main()
{
	double sum, f, d=1;
	for(int i=3; i<=11; i++)
	{
		f=1;
		for(int j=1; j<=i; j++)
			f=f*j;
		sum+=d/f;	//sum=sum+d/f;
		d+=4;	//d=d+4;
	}
	cout<<"Sum of the Series is: "<<sum;
	return 0;
}
