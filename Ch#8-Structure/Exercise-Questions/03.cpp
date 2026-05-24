#include <iostream>
using namespace std;
struct TaxPay
{
	double inc, tax, rat;
}c[5];

int main()
{
	cout<<"\t Enter Annual Income and Tax Rate for 5 Tax Payers:"<<endl<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<"Enter Annual Income of Tax Payer # "<<i+1<<": ";
		cin>>c[i].inc;
		cout<<"Enter Tax Rate for Tax Payer # "<<i+1<<": ";
		cin>>c[i].rat;
		c[i].tax = c[i].inc*c[i].rat/100;
	}
	cout<<"\nTax Dues for this Year:"<<endl;
	for(int i=0; i<5; i++)
		cout<<"Tax Payer # "<<i+1<<":  "<<"Rs. "<<c[i].tax<<endl;
	return 0;
}
