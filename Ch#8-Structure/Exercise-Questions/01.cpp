#include <iostream>
using namespace std;
struct Player
{
	int dis, min, sec;
}p1,p2;

int main()
{
	float t1, t2;
	cout<<"Enter Distance Covered by 1st Player: ";
	cin>>p1.dis;
	cout<<"Enter Minutes and Seconds: ";
	cin>>p1.min>>p1.sec;
	cout<<"Enter Distance Covered by 2nd Player: ";
	cin>>p2.dis;
	cout<<"Enter Minutes and Seconds: ";
	cin>>p2.min>>p2.sec;
	t1 = (p1.min*60+p1.sec)/p1.dis;
	t2 = (p2.min*60+p2.sec)/p2.dis;
	cout<<"\nThe Record of Winner Player:"<<endl;
	if(t1<t2)
		cout<<"Player 1 covered "<<p1.dis<<" Miles Distance in "<<p1.min<<" Minutes, "<<p1.sec<<" Seconds.";
	else
		cout<<"Player 2 covered "<<p2.dis<<" Miles Distance in "<<p2.min<<" Minutes, "<<p2.sec<<" Seconds.";
	return 0;
}
