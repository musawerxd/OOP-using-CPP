#include <iostream>
#include <iomanip>
using namespace std;
struct Dimension
{
	long double len, wid;
};
struct Results
{
	long double area, perm;
};
struct Rectangle
{
	Dimension d;
	Results r;
};

int main()
{
	struct Rectangle ang;
	cout << "Enter the Length of a Rectangle: ";
	cin >> ang.d.len;
	cout << "Enter the  Width of a Rectangle: ";
	cin >> ang.d.wid;
	ang.r.area = ang.d.len * ang.d.wid;
	ang.r.perm = 2 * (ang.d.len + ang.d.wid);
	cout << fixed << showpoint << setprecision(2);
	cout << endl
		 << "The Area of Rectangle is: " << ang.r.area;
	cout << endl
		 << "The Perimeter of Rectangle is: " << ang.r.perm;
	return 0;
}
