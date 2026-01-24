#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double x1, x2, y1, y2;
	cout << "Enter First Point x1 and y1: ";
	cin >> x1 >> y1;
	cout << "Enter Second Point x2 and y2: ";
	cin >> x2 >> y2;
	double dis = pow((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1), 0.5);
	cout << "\nDistance of Two Points is: " << dis;
	return 0;
}
