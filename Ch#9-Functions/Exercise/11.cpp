#include <iostream>
using namespace std;
long LCM(long a, long b)
{
	if(a<=0 || b<=0)
	{
		cout<<"Please Enter a,b Values which are Greater than Zero.";
		exit(0);
	}
	else
	{
		long r=1,s;
		if(a>b)
			s=a;
		else
			s=b;
		for(;1;s++)
			if(s%a==0 && s%b==0)
				break;
	
		//Another Method
		/*while(1)
		{
			if(s%a==0 && s%b==0)
				break;
			s++;	//++s;
		}*/
	
		return s;
	}
}

int main()
{
	long a, b, res;
	cout<<"Enter Two Integers:  ";
	cin>>a>>b;
	res = LCM(a,b);
	cout<<"Least Common Multiplier of ("<<a<<","<<b<<") is:  "<<res;
	return 0;
}
