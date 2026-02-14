#include <iostream>
using namespace std;
int main()
{
	int num, f = 1, c = 1;
	cout << "Enter Number to find its Factorial: ";
	cin >> num;
	while (c <= num)
	{
		f = f * c;
		c++;
	}
	cout << "Factorial of " << num << " is: " << f;
	return 0;
}
