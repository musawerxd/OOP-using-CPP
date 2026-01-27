#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter Three Numbers: ";
	cin>>a>>b>>c;
	if(a<b)
	{
		if(a<c)
			cout<<a<<" is the Smallest Number.";
		else
			cout<<c<<" is the Smallest Number.";
	}
	else
	{
		if(b<c)
			cout<<b<<" is the Smallest Number.";
		else
			cout<<c<<" is the Smallest Number.";
	}
	return 0;
}
