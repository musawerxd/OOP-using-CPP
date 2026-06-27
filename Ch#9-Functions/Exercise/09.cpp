#include <iostream>
using namespace std;
long Reverse(long num)
{
	int r=0;
	for(int i=num; i!=0; i/=10)
		r = 10*r+i%10;
	return r;
}

int main()
{
	long num, rev;
	cout<<"Enter an Integer:  ";
	cin>>num;
	rev = Reverse(num);
	cout<<"The Number in Reverse is "<<rev;
	return 0;
}
