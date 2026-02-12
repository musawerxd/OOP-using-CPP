#include <iostream>
using namespace std;
int main()
{
	int yrs, mon;
	cout << "Enter Year: ";
	cin >> yrs;
	cout << "Enter Number of the Month: ";
	cin >> mon;
	switch (mon)
	{
	case 1:
		cout << endl
			 << "January " << yrs << " has 31 Days.";
		break;
	case 2:
		if (yrs % 4 != 0) // for Ordinary Years
			cout << endl
				 << "February " << yrs << " has 28 Days.";
		if (yrs % 4 == 0) // for Leap Years
			cout << endl
				 << "February " << yrs << " has 29 Days.";
		break;
	case 3:
		cout << endl
			 << "March " << yrs << " has 31 Days.";
		break;
	case 4:
		cout << endl
			 << "April " << yrs << " has 30 Days.";
		break;
	case 5:
		cout << endl
			 << "May " << yrs << " has 31 Days.";
		break;
	case 6:
		cout << endl
			 << "June " << yrs << " has 30 Days.";
		break;
	case 7:
		cout << endl
			 << "July " << yrs << " has 31 Days.";
		break;
	case 8:
		cout << endl
			 << "August " << yrs << " has 31 Days.";
		break;
	case 9:
		cout << endl
			 << "September " << yrs << " has 30 Days.";
		break;
	case 10:
		cout << endl
			 << "October " << yrs << " has 31 Days.";
		break;
	case 11:
		cout << endl
			 << "November " << yrs << " has 30 Days.";
		break;
	case 12:
		cout << endl
			 << "December " << yrs << " has 31 Days.";
		break;
	}
	return 0;
}
