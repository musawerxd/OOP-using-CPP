#include <iostream>
using namespace std;
int main()
{
	int days;
	char ch;
	cout << "M for \t Motorcycle \t Rs.10 per Day" << endl;
	cout << "C for \t Car \t\t Rs.20 per Day" << endl;
	cout << "B for \t Bus \t\t Rs.30 per Day\n"
		 << endl;
	cout << "Enter Parking Choice: ";
	cin >> ch;
	cout << "How many days to park: ";
	cin >> days;
	switch (ch)
	{
	case 'M':
	case 'm':
		cout << "Parking Charges:  Rs." << days * 10;
		break;
	case 'C':
	case 'c':
		cout << "Parking Charges:  Rs." << days * 20;
		break;
	case 'B':
	case 'b':
		cout << "Parking Charges:  Rs." << days * 30;
		break;
	default:
		cout << "Invalid Parking Choice!";
	}
	return 0;
}
