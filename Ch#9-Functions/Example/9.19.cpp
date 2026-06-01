
#include <iostream>
using namespace std;
int evenCount(int arr[])
{
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter value " << i + 1 << "  :  ";
        cin >> arr[i];
    }
    cout << "Even Numbers in array are: " << evenCount(arr);
    return 0;
}