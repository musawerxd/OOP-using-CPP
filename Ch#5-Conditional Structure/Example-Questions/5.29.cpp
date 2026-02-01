#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter Number: ";
	cin >> num;
	(num % 3 == 0 ? cout << "Divisible by 3." : cout << "Not Divisible by 3.");
	return 0;
}
