#include <iostream>
using namespace std;
int Mul(long a, long b)
{
	if(a%b==0)
		return 1;
	else
		return 0;
}

int main()
{
	long num1, num2;
	int res;
	char inp;
	cout<<"Enter a Pair of Integers:  ";
	cin>>num1>>num2;
	res = Mul(num1, num2);
	if(res==1)
		cout<<num1<<" is the Multiple of "<<num2;
	else
		cout<<num1<<" is not the Multiple of "<<num2;
	return 0;
}
