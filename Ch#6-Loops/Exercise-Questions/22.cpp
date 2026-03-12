#include <iostream>
using namespace std;
int main()
{
	for (int i = 64; i >= 2; i /= 2)
		cout << i << "\t";
	return 0;
}
