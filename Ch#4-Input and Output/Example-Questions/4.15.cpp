#include <iostream>
using namespace std;
int main()
{
	double distance, speed, time;
	cout << "Enter the Distance traveled in (Kilometers): ";
	cin >> distance;
	cout << "Enter the Speed of Vehicle in (Kilometers per hour): ";
	cin >> speed;
	time = distance / speed;
	cout << "The Time required to reach the destination: " << time << " hours";
	return 0;
}
