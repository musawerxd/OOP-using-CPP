/*Problem:-   Write a program that displays all Prime Numbers between 100 and 500 that are the also Palindromes. */

#include <iostream>
using namespace std;
int main()
{
	int num, c, fake, mod;
	cout << "Prime Numbers between 100 and 500 that are also Palindrome are as follows:\n\n";
	for (num = 101; num < 500; num++)
	{
		int chk = 1;
		for (c = 2; c <= num / 2; c++)
		{
			if (num % c == 0)
			{
				chk = 0;
				break;
			}
		}
		if (chk == 1)
		{
			int rev = 0;
			for (fake = num; fake != 0; fake /= 10)
			{
				mod = fake % 10;
				rev = (rev * 10) + mod;
			}
			if (rev == num)
				cout << num << "\t";
		}
	}
	return 0;
}
