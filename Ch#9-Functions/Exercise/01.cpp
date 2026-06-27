#include <iostream>
using namespace std;
void decToBin(long num, long base);

int main()
{
	long dec, base=2;
	cout<<"Enter a Decimal Number:  ";
	cin>>dec;
	cout<<endl<<"Decimal ("<<dec<<") = ";
	decToBin(dec,base);
	cout<<" Binary";
	return 0;
}

void decToBin(long num, long base)
{
	if(num>0)
	{
		decToBin(num/base, base);
		cout<<num%base;
	}
}
