#include <iostream>
using namespace std;
struct Phone
{
	int ncod, acod;
	long no;
} p1, p2 = {92, 41, 9220083};
int main()
{
	cout << "Enter National Code: ";
	cin >> p1.ncod;
	cout << "Enter Area Code: ";
	cin >> p1.acod;
	cout << "Enter Phone Number: ";
	cin >> p1.no;
	cout << endl
		 << "Phone Number 1:  " << "+" << p1.ncod << "-" << p1.acod << "-" << p1.no;
	cout << endl
		 << "Phone Number 2:  " << "+" << p2.ncod << "-" << p2.acod << "-" << p2.no;
	return 0;
}
