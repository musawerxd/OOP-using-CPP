#include <iostream>
using namespace std;
int main()
{
	int num = 8, inc = 4;
	while (num <= 100)
	{
		cout << num << "\t";
		num = num + inc;
		if (inc == 4)
			inc = 5;
		else if (inc == 5)
			inc = 7;
		else
			inc = 4;
	}
	return 0;
}
