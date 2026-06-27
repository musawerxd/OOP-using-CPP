#include <iostream>
using namespace std;
void fun(long a, long &b)
{
	a*=2;
	b*=2;
}

int main()
{
	long a,b;
	cout<<"Enter Value of a: ";
	cin>>a;
	cout<<"Enter Value of b: ";
	cin>>b;
	cout<<"\nThe Value of a before Function Call: "<<a<<endl;
	cout<<"The Value of b before Function Call: "<<b<<endl;
	fun(a,b);
	cout<<"\nThe Value of a after Function Call: "<<a<<endl;
	cout<<"The Value of b after Function Call: "<<b;
	return 0;
}

/*Note: Here Value of a (Pass by Value Method) does not change because it uses different Memory Address and any change in Formal Parameter does not effect the real value.
On the Other Side Value of b (Pass by Reference Method) changes because it has same Memory Address and any change in Fomral Parameter effect the Real Value.*/
