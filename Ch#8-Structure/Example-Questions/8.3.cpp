#include <iostream>
using namespace std;
struct book
{
	int id, pg, prc;
};
int main()
{
	book b1, b2;
	cout<<"Enter ID, Pages and Price of Book:  ";
	cin>>b1.id>>b1.pg>>b1.prc;
	cout<<"Enter ID, Pages and Price of Book:  ";
	cin>>b2.id>>b2.pg>>b2.prc;
	cout<<"\nThe Most Costly Book is as follows:\n";
	if(b1.prc>b2.prc)
	{
		cout<<"BookID: "<<b1.id<<endl;
		cout<<"Pages: "<<b1.pg<<endl;
		cout<<"Price: "<<b1.prc;
	}
	else
	{
		cout<<"BookID: "<<b2.id<<endl;
		cout<<"Pages: "<<b2.pg<<endl;
		cout<<"Price: "<<b2.prc;
	}
	return 0;
}
