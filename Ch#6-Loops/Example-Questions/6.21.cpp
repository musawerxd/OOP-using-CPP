#include <iostream>
using namespace std;
int main()
{
	int s, e, c;
	cout << "Enter Starting Number: ";
	cin >> s;
	cout << "Enter Ending Number: ";
	cin >> e;
	c = s;
	do
	{
		if (!(c % 2 == 0))
			cout << c << endl;
		c++;
	} while (c <= e);
	return 0;
}
