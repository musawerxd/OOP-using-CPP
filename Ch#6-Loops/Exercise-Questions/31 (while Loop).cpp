#include <iostream>
using namespace std;
int main()
{
	double sum, f, d=1;
	int i=3;
	while(i<=11)
	{
		f=1;
		int j=1;
		while(j<=i)
		{
			f=f*j;
			j++;
		}
		sum+=d/f;	//sum=sum+d/f;
		d+=4;	//d=d+4;
		i++;
	}
	cout<<"Sum of the Series is: "<<sum;
	return 0;
}
