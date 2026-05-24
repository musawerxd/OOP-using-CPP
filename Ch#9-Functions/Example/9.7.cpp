#include <iostream>
using namespace std;
int main()
{
    int x, y;
    char op;
    cout << "Enter first Number : ";
    cin >> x;
    cout << "Enter Operator : ";
    cin >> op;
    cout << "Enter Second Number : ";
    cin >> y;

    switch (op)
    {
    case '+':
        cout << x << " + " << y << " = " << x + y;
        break;
    case '-':
        cout << x << " - " << y << " = " << x - y;
        break;
    case '/':
        cout << x << " / " << y << " = " << x / y;
        break;
    case '%':
        cout << x << " % " << y << " = " << x % y;
        break;
    case '*':
        cout << x << " * " << y << " = " << x * y;
        break;
    default:
        cout << "Invalid Operator!";
    }

    return 0;
}