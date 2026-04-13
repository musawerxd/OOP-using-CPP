#include <iostream>
using namespace std;
struct emp
{
	int id, sal;
};
int main()
{
	emp e = {20, 18500};
	cout << "Employee ID: " << e.id << endl;
	cout << "Salary: " << e.sal;
	return 0;
}
