#include <iostream>
using namespace std;
int main()
{
	int num, fake, rev = 0, digit;
	cout << "Enter a Positive Number: ";
	cin >> num;
	fake = num;
	do
	{
		digit = fake % 10;
		rev = (rev * 10) + digit;
		fake = fake / 10;
	} while (fake != 0);
	cout << "The Reverse of Entered Number is: " << rev << endl;
	if (num == rev)
		cout << rev << " is a Palindrome Number.";
	else
		cout << rev << " is not a Palindrome Number.";
	return 0;
}
