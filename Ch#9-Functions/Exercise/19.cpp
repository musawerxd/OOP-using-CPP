#include <iostream>
using namespace std;
long fab(int num)
{
	if(num==1)
		return 1;
	else if(num==2)
		return 1;
	else
		return fab(num-1)+fab(num-2);
}

int main()
{
	int num;
	cout<<"Enter a Number for the Series:  ";
	cin>>num;
	cout<<"The "<<num<<" Number of Fibonacci Series is as Follows: "<<fab(num);
	return 0;
}
