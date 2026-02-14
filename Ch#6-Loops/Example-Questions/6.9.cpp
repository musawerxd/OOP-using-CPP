#include <iostream>
using namespace std;
int main()
{
	float n=1.0,c=2.0;
	while(c<=100)
	{
		n=n+1.0/c;
		c+=2;
	}
	cout<<"Result is "<<n;
	return 0;
}
