#include <iostream>
using namespace std;
int main()
{
	double len, wid, ht, v;
	cout << "Enter Length: ";
	cin >> len;
	cout << "Enter Width: ";
	cin >> wid;
	cout << "Enter Height: ";
	cin >> ht;
	v = len * wid * ht;
	cout << "Volume of Cube: " << v;
	return 0;
}
