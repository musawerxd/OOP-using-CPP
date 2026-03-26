#include <iostream>
using namespace std;
int main()
{
	int ht;
	cout << "Enter Height of a Triangle: ";
	cin >> ht;
	cout << "\n";
	for (int i = ht, sp = 0; i > 0; i--, sp++)
	{
		for (int j = 0; j <= sp; j++)
			cout << " " << " ";
		for (int k = 1; k < 2 * i; k++)
			cout << "&" << " ";
		cout << endl;
	}
	return 0;
}
