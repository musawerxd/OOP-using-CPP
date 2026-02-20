#include <iostream>
using namespace std;
int main()
{
	long int num;
	int mod;
	cout << "Enter a Number: ";
	cin >> num;
	int low = num % 10, high = num % 10;
	for (int fake = num; fake >= 1; fake /= 10)
	{
		mod = fake % 10;
		if (mod > high)
			high = mod;
		if (mod < low)
			low = mod;
	}
	cout << "The Highest Digit of " << num << " is: " << high << endl;
	cout << "The  Lowest Digit of " << num << " is: " << low;
	return 0;
}
