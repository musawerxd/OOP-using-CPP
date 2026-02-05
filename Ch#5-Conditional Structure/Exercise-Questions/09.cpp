#include <iostream>
using namespace std;
int main()
{
	long yr;
	cout << "Enter Year:  ";
	cin >> yr;
	if (yr % 4 == 0)
		cout << yr << " is a Leap Year.";
	else if (yr % 100 == 0 && yr % 400 == 0)
		cout << yr << " is a Leap Year.";
	else
		cout << yr << " is not a Leap Year.";
	return 0;
}
