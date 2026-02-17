#include <iostream>
using namespace std;
int main()
{
	int pro = 1, n;
	for (n = 1; n <= 10; n += 2)
		pro = pro * n;
	cout << "Result is: " << pro;
	return 0;
}
