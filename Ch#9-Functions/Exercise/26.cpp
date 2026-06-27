#include <iostream>
using namespace std;
struct Time
{
	int hr, min;
}t1,t2;
int fun(Time t1, Time t2)
{
	int min1, min2;
	min1 = t1.hr*60+t1.min;
	min2 = t2.hr*60+t2.min;
	if(min1 > min2)
		return min1-min2;
	else
		return min2-min1;
}

int main()
{
	cout<<"\t Enter First Time:"<<endl;
	cout<<"Hours: ";
	cin>>t1.hr;
	cout<<"Minutes: ";
	cin>>t1.min;
	cout<<"\t Enter Second Time:"<<endl;
	cout<<"Hours: ";
	cin>>t2.hr;
	cout<<"Minutes: ";
	cin>>t2.min;
	cout<<"\nDifference between Times is "<<fun(t1,t2)<<" Minutes.";
	return 0;
}
