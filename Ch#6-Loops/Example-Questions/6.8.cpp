#include <iostream>
#include <iomanip>
const float PI = 3.141593;
using namespace std;
int main()
{
	int degree = 0;
	float radian = 0;
	cout << "Degree\t\tRadian\n";
	while (degree <= 360)
	{
		radian = degree * PI / 180;
		cout << degree << "\t\t" << fixed << setprecision(6) << radian << endl;
		degree += 10;
	}
	return 0;
}
