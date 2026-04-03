#include <iostream>
using namespace std;
int main()
{
	int age[200], n, a, con = 0;
	cout << "Enter the Number of Persons Required: ";
	cin >> n;
	cout << "Enter ages of " << n << " Persons:" << endl;
	for (a = 0; a < n; a++)
	{
		cin >> age[a];
		if (age[a] >= 50 && age[a] <= 60)
			con++;
	}
	cout << endl
		 << con << " Persons are between 50 and 60.";
	return 0;
}
