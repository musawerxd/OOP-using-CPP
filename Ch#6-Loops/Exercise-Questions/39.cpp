/*Problem:-   Write a program to print the following outputs using loops:
			  1
			  1 2
			  1 2 3
			  1 2 3 4
			  1 2 3 4 5			*/

#include <iostream>
using namespace std;
int main()
{
	int a, b;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= a; b++)
			cout << b << " ";
		cout << endl;
	}
	return 0;
}
