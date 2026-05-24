#include <iostream>
using namespace std;
int maxN(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int x, y;
    cout << "Enter First Number:";
    cin >> x;
    cout << "Enter Second Number:";
    cin >> y;
    cout << "Max Number is: " << maxN(x, y);
    return 0;
}