#include <iostream>
using namespace std;
int main()
{
	int vf,vi,a,t;
	cout<<"Enter initial Velocity: ";
	cin>>vi;
	cout<<"Enter Acceleration: ";
	cin>>a;
	cout<<"Enter Time: ";
	cin>>t;
	vf=vi+a*t;
	cout<<"The Final Velocity is "<<vf;
	return 0;
}
