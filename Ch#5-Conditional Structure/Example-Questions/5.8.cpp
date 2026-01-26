#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a Number: ";
	cin>>n;
	if(n%2==0)
		cout<<n<<" is an Even Number.";
	else
		cout<<n<<" is an Odd Number.";
	return 0;
}
