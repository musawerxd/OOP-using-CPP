#include <iostream>
using namespace std;
int main()
{
	int a=1, b=5;
	cout<<"--------------------------"<<endl;
	cout<<"A\t\t\t B"<<endl;
	cout<<"--------------------------"<<endl;	
	while(a<=5 && b>=1) 
	{
		cout<<a<<"\t\t\t"<<b<<endl;
		a++;
		b--;
	}
	cout<<"--------------------------"<<endl;
	return 0;
}
