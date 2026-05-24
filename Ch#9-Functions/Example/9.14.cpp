#include <iostream>
using namespace std;
int GCD(int a, int b)
{
    int temp = (a < b) ? a : b;
    int res = 1;
    for (int i = 1; i <= temp; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            res = i;
        }
    }
    return res;
}

int main()
{
    int a;
    int b;
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;

    cout << "Greatest Common Divisor is : " << GCD(a, b);

    return 0;
}