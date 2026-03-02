#include <iostream>
using namespace std;
int main()
{
	int ans1 = 0, ans2 = 0, ans3 = 0, ans4 = 0, ans, val;
	for (int i = 0; i < 20; i++)
	{
		cout << "Enter Either 1,2,3 or 4:  ";
		cin >> val;
		switch (val)
		{
		case 1:
			ans1++;
			break;
		case 2:
			ans2++;
			break;
		case 3:
			ans3++;
			break;
		case 4:
			ans4++;
			break;
		default:
			cout << "Incorrect Choice" << endl;
			i--;
		}
	}
	cout << "Number of Answer 1's is: " << ans1 << endl;
	cout << "Number of Answer 2's is: " << ans2 << endl;
	cout << "Number of Answer 3's is: " << ans3 << endl;
	cout << "Number of Answer 4's is: " << ans4;
	return 0;
}
