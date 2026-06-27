#include <iostream>
using namespace std;

int power(int a, int b)
{
    // int result = 1;
    // for (int i = 0; i < b; i++)
    // {
    //     result *= a;
    // }
    // return result;

    if (b <= 0)
    {
        return 1;
    }
    else
    {
        return a * power(a, b - 1);
    }
}

int main()
{
    int number1, number2;
    cout << "Enter First Number: ";
    cin >> number1;
    cout << "Enter Second Number: ";
    cin >> number2;

    cout << number1 << "^" << number2 << " = " << power(number1, number2);
    return 0;
}