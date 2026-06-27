#include <iostream>
using namespace std;
struct City
{
	char n[30];
	unsigned long pop;
}a,b;
void fun(City a, City b)
{
	if(a.pop < b.pop)
	{
		cout<<"\nThe City with Less Population is:  "<<a.n<<endl;
		cout<<"Its Population is:  "<<a.pop;
	}
	else
	{
		cout<<"\nThe City with Less Population is:  "<<b.n<<endl;
		cout<<"Its Population is:  "<<b.pop;
	}
}

int main()
{
	cout<<"Enter Name of First City:  ";
	cin>>a.n;
	cout<<"Enter Its Population:  ";
	cin>>a.pop;
	cout<<"Enter Name of Second City:  ";
	cin>>b.n;
	cout<<"Enter Its Population:  ";
	cin>>b.pop;
	fun(a,b);
	return 0;
}
