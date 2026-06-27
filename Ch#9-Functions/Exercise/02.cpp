#include <iostream>
#include <math.h>
using namespace std;
void binToDec(long bin, long &dec, long& we)
{
	long bit;
	if(bin>0)
	{
		bit=bin%10;
		dec = dec+bit*(pow(2,we));
		bin/=10;
		we++;
		binToDec(bin,dec,we);
	}
}

int main()
{
	long dec=0, bin, we=0;
	cout<<"Enter a Binary Number:  ";
	cin>>bin;
	cout<<endl;
	binToDec(bin,dec,we);
	cout<<"Binary ("<<bin<<") = "<<dec<<" Decimal";
	return 0;
}
