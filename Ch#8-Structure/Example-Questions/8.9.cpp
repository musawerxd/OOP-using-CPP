#include <iostream>
using namespace std;
struct book
{
	int id, pg, prc;
} b[5];
int main()
{
	int max, m = 0;
	for (int a = 0; a < 5; a++)
	{
		cout << "Enter Book ID: ";
		cin >> b[a].id;
		cout << "Enter Pages: ";
		cin >> b[a].pg;
		cout << "Enter Price: ";
		cin >> b[a].prc;
		cout << endl;
	}
	max = b[0].prc;
	for (int a = 0; a < 5; a++)
		if (b[a].prc > max)
		{
			max = b[a].prc;
			m = a;
		}
	cout << endl
		 << "The Record of Most Costly Book is:\n";
	cout << "Book ID: " << b[m].id << endl;
	cout << "Pages: " << b[m].pg << endl;
	cout << "Price: " << b[m].prc;
	return 0;
}
