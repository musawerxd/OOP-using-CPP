#include <iostream>
using namespace std;
void Star(int sp, int star)
{
	for(int i=1; i<=sp; i++)
		cout<<" ";
	for(int i=1; i<=star; i++)
		cout<<" *";
	cout<<endl;
}

int main()
{
	int line, sp;
	cout<<"Enter Number of Star Lines to Print (1 to 20):  ";
	cin>>line;
	while(line<=0 || line>20)
	{
		cout<<"\t Number of Star Lines should be between 1 and 20"<<endl;
		cout<<"Enter Number of Star Lines to Print (1 to 20):  ";
		cin>>line;
	}
	cout<<endl;
	sp=30;
	for(int i=1; i<=line; i++)
	{
		Star(sp, i);
		sp--;
	}
	return 0;
}
