#include <iostream>
using namespace std;
int main()
{
	enum year
	{
		January,
		February,
		March,
		April,
		May,
		June,
		July,
		August,
		September,
		October,
		November,
		December
	} y;
	y = March;
	cout << "The Value of y is: " << y;
	return 0;
}
