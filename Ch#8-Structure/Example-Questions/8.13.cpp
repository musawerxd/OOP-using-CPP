#include <iostream>
using namespace std;
union shirt
{
	char sz;
	int chst, hght;
} m;

int main()
{
	cout << "The Size of Union is: " << sizeof(m) << endl;

	cout << endl
		 << "What Size (S/M/L) ?" << endl;
	cin >> m.sz;
	cout << "The Size is: " << m.sz << endl;
	cout << "The Chest Measurement is: " << m.chst << endl;
	cout << "The Height Measurement is: " << m.hght << endl;

	cout << endl
		 << "What is the Chest Measurement?" << endl;
	cin >> m.chst;
	cout << "The Size is: " << m.sz << endl;
	cout << "The Chest Measurement is: " << m.chst << endl;
	cout << "The Height Measurement is: " << m.hght << endl;

	cout << endl
		 << "What is the Height Measurement?" << endl;
	cin >> m.hght;
	cout << "The Size is: " << m.sz << endl;
	cout << "The Chest Measurement is: " << m.chst << endl;
	cout << "The Height Measurement is: " << m.hght << endl;
	return 0;
}
