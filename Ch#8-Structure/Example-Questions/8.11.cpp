#include <iostream>
using namespace std;
struct date
{
	int day, mon, year;
};
struct phonebook
{
	char name[20], city[20];
	long tel;
	date d;
} p;

int main()
{
	cout << "Enter Name: ";
	cin >> p.name;
	cout << "City Name: ";
	cin >> p.city;
	cout << "Enter Phone Number: ";
	cin >> p.tel;
	cout << "Enter Date of Birth in the Format of (dd-mm-yyyy): ";
	cin >> p.d.day >> p.d.mon >> p.d.year;
	cout << endl
		 << "The Size of Structure Variable is: " << sizeof(p) << endl;
	cout << endl
		 << "The Entry Made is:" << endl;
	cout << "Name: " << p.name << endl
		 << "City: " << p.city << endl;
	cout << "Phone Number: " << p.tel << endl;
	cout << "Birthday is on: " << p.d.day << "-" << p.d.mon << "-" << p.d.year;
	return 0;
}
