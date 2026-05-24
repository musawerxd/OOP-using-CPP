#include <iostream>
#include <iomanip>
using namespace std;
struct Book
{
	double bid;
	char n[30];
	float pr;
};
struct Order
{
	int oid;
	Book bk[5];
};

int main()
{
	Order ord;
	cout<<"Enter Order ID: ";
	cin>>ord.oid;
	cout<<"Enter Details of Five Books in Order:"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<"Enter Book ID: ";
		cin>>ord.bk[i].bid;
		cin.clear();
		cin.sync();
		cout<<"Enter Book Name: ";
		gets(ord.bk[i].n);
		cout<<"Enter Book Price: ";
		cin>>ord.bk[i].pr;
	}
	cout<<"\nOrder Details is Follows:"<<endl;
	cout<<"\tOrder ID: "<<ord.oid<<endl;
	cout<<setw(20)<<left<<"Book ID"<<setw(25)<<"Book Name"<<setw(20)<<"Price"<<endl;
	for(int i=0; i<5; i++)
		cout<<setw(20)<<left<<ord.bk[i].bid<<setw(25)<<left<<ord.bk[i].n<<setw(20)<<ord.bk[i].pr<<endl;
	return 0;
}
