#include <iostream>
using namespace std;

int mul(int a, int b)
{
    if (b % a == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a;
    int b;
    cout << "Enter First integers: ";
    cin >> a;
    cout << "Enter Second integers: ";
    cin >> b;
    int result = mul(a, b);

    if (result)
    {
        cout << b << " is multiple of " << a;
    }
    else
    {
        cout << b << " is not multiple of " << a;
    }

    return 0;
}