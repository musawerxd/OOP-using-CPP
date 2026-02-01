#include <iostream>
using namespace std;
int main()
{
	int n = 1;
label:
	cout << n << ": C++" << endl;
	n++;
	if (n <= 5)
		goto label;
	cout << "End of Program.";
	return 0;
}
