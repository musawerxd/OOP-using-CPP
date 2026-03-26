#include <iostream>
using namespace std;
int main()
{
	for (int row = 8; row-- > 0;)
	{
		if (row % 2 != 0)
			cout << "  ";
		for (int side = 8; side-- > 0;)
			cout << " -";
		cout << endl;
	}
	return 0;
}
