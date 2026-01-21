#include <iostream>
using namespace std;
int main()
{
	double p,r,y,i;
	cout<<"Enter Amount, Rate of interest, Years:  ";
	cin>>p>>r>>y;
	i=(p*r*y)/100;
	cout<<"\nPrincipal Ammount:  Rs."<<p<<endl;
	cout<<"Rate of interest:  "<<r<<"%"<<endl;
	cout<<"Time:  "<<y<<"years"<<endl;
	cout<<"Simple interest Amount:  Rs."<<i;
	return 0;
}
