#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a,b,c,num=5;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=num;b++)
			cout<<" ";
		for(c=1;c<=a;c++)
			cout<<setw(2)<<a;
		cout<<endl;
		num--;
	}
	return 0;
}
