#include <iostream>
using namespace std;
int main()
{
	int ev, od, r;
	cout << "Enter an Even Number: ";
	cin >> ev;
	cout << "Enter an Odd Number: ";
	cin >> od;
	r = 1000 - ((ev * 5) + (od * 3));
	cout << "Difference: " << r;
	return 0;
}
