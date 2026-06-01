#include <iostream>
using namespace std;
void displayArr(int n)
{
    cout << n << "\t" << n * n << endl;
}
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Value " << i + 1 << "  :  ";
        cin >> arr[i];
    }
    cout << endl
         << "Calling The Function" << endl;
    for (int i = 0; i < 5; i++)
    {
        displayArr(arr[i]);
    }

    return 0;
}