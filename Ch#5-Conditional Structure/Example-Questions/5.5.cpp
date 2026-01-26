#include <iostream>
using namespace std;
int main()
{
	int num1, num2, num3, max;
	cout<<"Enter First Number: ";
	cin>>num1;
	cout<<"Enter Second Number: ";
	cin>>num2;
	cout<<"Enter Third Number: ";
	cin>>num3;
	max=num1;
	if(num2>max)
	max=num2;
	if(num3>max)
	max=num3;
	cout<<"The Maximum Number is: "<<max;
	return 0;
}
