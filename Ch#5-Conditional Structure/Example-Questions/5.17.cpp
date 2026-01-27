#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter Three Numbers: ";
	cin>>a>>b>>c;
	if(a==b)
	{
		if(a==c)
			cout<<"All Numbers are Equal.";
		else
			cout<<"Numbers are Different.";
	}
	else
		cout<<"Numbers are Different.";
	return 0;
}
