#include <iostream>
using namespace std;
double Tax(long sal)
{
	double t;
	if(sal<=1000)
		t=0;
	else if(sal>1000 && sal<=2000)
	{
		sal-=1000;	//sal=sal-1000;
		t=sal*5/100;
	}
	else if(sal>2000 && sal<=3000)
	{
		t=1000*5/100;
		sal-=2000;	//sal=sal-2000;
		t+=sal*4/100;	//t=t+(sal*4/100);
	}
	else
	{
		t=1000*5/100;
		t+=1000*4/100;
		sal-=3000;
		t+=sal*3/100;
	}
	return t;
}

int main()
{
	long sal;
	cout<<"Enter Salary: ";
	cin>>sal;
	cout<<"Tax on Salary "<<sal<<" is Rs. "<<Tax(sal);
	return 0;
}
