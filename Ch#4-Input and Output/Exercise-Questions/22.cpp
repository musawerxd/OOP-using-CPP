#include <iostream>
using namespace std;
int main()
{
	int num, ld, nd, tot; // nd = next_digit , ld = last_digit
	cout << "Enter Five-Digit Integer: ";
	cin >> num;
	ld = num % 10;
	tot = ld;
	nd = (num / 10) % 10;
	tot = tot + nd;
	nd = (num / 100) % 10;
	tot = tot + nd;
	nd = (num / 1000) % 10;
	tot = tot + nd;
	nd = (num / 10000) % 10;
	tot += nd;
	cout << "The Sum of the Digits of Entered Number is: " << tot;
	return 0;
}
