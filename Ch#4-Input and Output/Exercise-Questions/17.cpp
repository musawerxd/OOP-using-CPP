#include <iostream>
using namespace std;
int main()
{
	double len, rad, ang;
	cout << "Enter Radius: ";
	cin >> rad;
	cout << "Enter Angle: ";
	cin >> ang;
	len = rad * ang;
	cout << "Length: " << len;
	return 0;
}
