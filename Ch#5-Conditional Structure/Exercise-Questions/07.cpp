#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout << "\tMovies Categories" << endl;
	cout << "\t-----------------" << endl;
	cout << " A \t for Adventure Movies" << endl;
	cout << " C \t for Comdedy Movies" << endl;
	cout << " F \t for Family Movies" << endl;
	cout << " H \t for Horror Movies" << endl;
	cout << " S \t for Science Fiction Movies" << endl;
	cout << "\nEnter Code of Movie Category: ";
	cin >> ch;
	switch (ch)
	{
	case 'A':
	case 'a':
		cout << "\tYour Selection is Adventure Movies";
		break;
	case 'C':
	case 'c':
		cout << "\tYour Selection is Comedy Movies";
		break;
	case 'F':
	case 'f':
		cout << "\tYour Selection is Family Movies";
		break;
	case 'H':
	case 'h':
		cout << "\tYour Selection is Horror Movies";
		break;
	case 'S':
	case 's':
		cout << "\tYour Selection is Science Fiction Movies";
		break;
	default:
		cout << "\tInvalid Category";
	}
	return 0;
}
