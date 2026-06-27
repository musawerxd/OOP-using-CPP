#include <iostream>
using namespace std;
void Fib(int num)
{
	int a=1, b=1, c;
	cout<<a<<"\t"<<b<<"\t";
	c=a+b;
	while(c<=num)
	{
		cout<<c<<"\t";
		a=b;
		b=c;
		c=a+b;
	}
}

int main()
{
	long num;
	cout<<"Enter the Limit of Fibonacci Series: ";
	cin>>num;
	cout<<"\nFibonacci Series upto "<<num<<" is as follows:"<<endl;
	Fib(num);
	return 0;
}
