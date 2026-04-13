#include <iostream>
#include <iomanip>
using namespace std;
struct PayRoll
{
	int id;
	char fname[50], sname[50];
	double hrs, hrate, grpy;
} e;
int main()
{
	cout << "Enter Employee's Number: ";
	cin >> e.id;
	cout << "Enter Employee's First Name: ";
	cin >> e.fname;
	cout << "Enter Employee's Second Name: ";
	cin >> e.sname;
	cout << "Enter Number of Hours Worked: ";
	cin >> e.hrs;
	cout << "Enter Hourly Pay Rate:  Rs.";
	cin >> e.hrate;
	cout << endl
		 << "Employee's PayRoll Data:\n";
	cout << "Name: " << e.fname << " " << e.sname << endl;
	cout << "Number: " << e.id << endl;
	cout << "Hours Worked: " << e.hrs << endl;
	cout << "Hourly Pay Rate:  Rs." << e.hrate << endl;
	e.grpy = e.hrs * e.hrate;
	cout << "Gross Pay:  Rs. ";
	cout << fixed << showpoint << setprecision(2) << e.grpy;
	return 0;
}
