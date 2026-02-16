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
	while (c <= e)
	{
		if (c % 2 == 0)
			cout << c << endl;
		c++;
	}
	return 0;
}
