#include <iostream>
using namespace std;
int main()
{
	int row=6;
	for(int r=1; r<=row; r++)
	{
		for(int p=1; p<=row-r; p++)
			cout<<" #";
		for(int s=1; s<=2*r-1; s++)
			if(s==1 || s==2*r-1)
				cout<<" *";
			else
				cout<<" #";
		for(int p=1; p<=row-r; p++)
			cout<<" #";
		cout<<endl;
	}
	return 0;
}
