#include <iostream>
using namespace std;
int main()
{
	int a, b;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 10; b++)
			cout << "*";
		cout << endl;
	}
	return 0;
}
