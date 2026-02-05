#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float marks, per;
	cout << "Enter Obtained Marks: ";
	cin >> marks;
	per = marks / 1100 * 100;
	cout << endl
		 << fixed << setprecision(2) << "Your Percentage is: " << per << endl;
	if (per >= 80)
		cout << "Your Grade is: A+";
	else if (per >= 70)
		cout << "Your Grade is: A";
	else if (per >= 60)
		cout << "Your Grade is: B";
	else if (per >= 50)
		cout << "Your Grade is: C";
	else if (per >= 40)
		cout << "Your Grade is: D";
	else if (per >= 33)
		cout << "Your Grade is: E";
	else
		cout << "Your Grade is: F";
	return 0;
}
