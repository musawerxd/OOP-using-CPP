#include <iostream>
using namespace std;
int main()
{
	for (int i = 5; i > 0; i -= 1)
	{
		for (int j = 1; j <= 5 - i; j += 1)
			cout << ".";
		for (int k = 1; k <= 2 * i - 1; k += 1)
			cout << "B";
		cout << endl;
	}
	return 0;
}
