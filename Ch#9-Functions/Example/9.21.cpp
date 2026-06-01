#include <iostream>
#include <climits>
using namespace std;
int maxNumber(int arr[3][2])
{
    int max = INT_MIN;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}
int main()
{
    int arr[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Enter value for coulum : " << i << " " << j << "  :  ";
            cin >> arr[i][j];
        }
    }
    cout << "Maximum Value is: " << maxNumber(arr);

    return 0;
}