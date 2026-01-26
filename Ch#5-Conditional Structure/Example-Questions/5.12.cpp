#include <iostream>
using namespace std;
int main()
{
	int score;
	cout << "Enter your Test Score: ";
	cin >> score;
	if (score >= 90)
		cout << "Your Grade is A";
	else if (score >= 80)
		cout << "Your Grade is B";
	else if (score >= 70)
		cout << "Your Grade is C";
	else if (score >= 60)
		cout << "Your Grade is D";
	else
		cout << "Your Grade is F";
	return 0;
}
