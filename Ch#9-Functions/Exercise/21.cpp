#include <iostream>
using namespace std;
float AVG(int r, int b)
{
	float a;
	a=r*60/b;
	return a;
}

int main()
{
	int run, ball;
	cout<<"Enter Total Runs given: ";
	cin>>run;
	cout<<"Enter Number of Balls delivered: ";
	cin>>ball;
	cout<<"Player's Average: "<<AVG(run,ball);
	return 0;
}
