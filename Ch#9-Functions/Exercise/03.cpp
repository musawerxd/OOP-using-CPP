#include <iostream>
using namespace std;
const int i=10;
void initialize(int& zCount, int& oCount, int& eCount)
{
	zCount = 0;
	oCount = 0;
	eCount = 0;
}
void getNum(long& num)
{
	cin>>num;
}
void ClassifyNum(long num, int& zCount, int& oCount, int& eCount)
{
	switch(num%2)
	{
		case 0:
			eCount++;
			if(num==0)
			zCount++;
			break;
		case 1:
		case -1:
			oCount++;
	}
}
void Res(int zCount, int oCount, int eCount)
{
	cout<<eCount<<" Evens including "<<zCount<<" Zeros"<<endl;
	cout<<"Total Number of Odds are:  "<<oCount;
}

int main()
{
	int zero, odd, even;
	long num;
	initialize(zero, odd, even);
	cout<<"Please Enter "<<i<<" Integers:"<<endl;
	for(int count=1; count<=i; count++)
	{
		getNum(num);
		ClassifyNum(num, zero, odd, even);
	}
	cout<<endl;
	Res(zero,odd,even);
	return 0;
}
