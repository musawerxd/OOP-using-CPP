#include <iostream>
using namespace std;

void table(int number)
{
    for (int i = 0; i < 10; i++)
    {
        cout << number << " * " << i + 1 << " = " << number * (i + 1) << endl;
    }
}
int main()
{
    int number;
    cout << "Enter a Number: ";
    cin >> number;
    table(number);
    return 0;
}