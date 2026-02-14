#include <iostream>
using namespace std;
int main()
{
	int num,EvenSum=0,OddSum=0;
	cout<<"Enter a Positive Number: ";
	cin>>num;
	while(num!=0)
	{
		if(num%2==0)
			EvenSum=EvenSum+num;
		else
			OddSum=OddSum+num;
		num--;
	}
	cout<<"The Sum of Even Digits: "<<EvenSum<<endl;
	cout<<"The Sum of Odd  Digits: "<<OddSum;
	return 0;
}
