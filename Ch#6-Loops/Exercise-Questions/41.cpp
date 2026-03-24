#include <iostream>
using namespace std;
int main()
{
	for(int i=1; i<=4; ++i)
	{
		cout<<i;
		for(int j=2; j<=6; j+=2)
			cout<<"  "<<j;
		cout<<endl;
	}
	return 0;
}
