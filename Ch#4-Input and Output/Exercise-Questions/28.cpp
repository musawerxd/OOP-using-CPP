#include <iostream>
using namespace std;
int main()
{
	int s1, s2, s3, s4, s5, tot;
	cout << "Enter Marks in English: ";
	cin >> s1;
	cout << "Enter Marks in Urdu: ";
	cin >> s2;
	cout << "Enter Marks in Math: ";
	cin >> s3;
	cout << "Enter Marks in Islamiyat: ";
	cin >> s4;
	cout << "Enter Marks in Science: ";
	cin >> s5;
	tot = s1 + s2 + s3 + s4 + s5;
	float avg = float(tot) / 5.0;
	cout << "Total Marks: " << tot << endl;
	cout << "Average Marks: " << avg;
	return 0;
}
