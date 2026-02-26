#include <iostream>
using namespace std;
int main()
{
	int num = 1, sum = 0;
	cout << "--------------------" << endl;
	cout << "num \t\t sum" << endl;
	cout << "--------------------" << endl;
	while (num <= 5)
	{
		sum = sum + num;
		cout << num << "\t\t" << sum << endl;
		num++;
	}
	cout << "--------------------" << endl;
	return 0;
}
