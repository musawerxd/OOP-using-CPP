#include <iostream>
#include <iomanip>
using namespace std;
double fun(double num1, int num2)
{
	double tot=1;
	while(num2-- > 0)	/*num2-- means every time num2 value decrease by one but on first execution it remains same. num2-- is not equal to --num2 because --num2 decrease by one on first execution but num2-- not*/
		tot*=num1;
	return tot;
}

int main()
{
	double val, res;
	int mul;
	cout<<"Enter a Floating Value: ";
	cin>>val;
	cout<<"Enter the Multiplier: ";
	cin>>mul;
	res = fun(val,mul);
	cout<<"\nThe Result is: "<<fixed<<setprecision(3)<<res;
	return 0;
}
