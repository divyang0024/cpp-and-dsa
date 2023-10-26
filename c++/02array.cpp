#include <iostream>
#include <climits>
using namespace std;

int findMin(int arr[])
{
    int ans = INT_MAX, i = 0;

    while (i < 5)
    {
        if (arr[i] < ans)
        {
            ans = arr[i];
        }
        ++i;
    }

    return ans;
}

int findMax(int arr[])
{
    int ans = INT_MIN, i = 0;

    while (i < 5)
    {
        if (arr[i] > ans)
        {
            ans = arr[i];
        }
        ++i;
    }

    return ans;
}

int main()
{
    int arr[5];

    cout << "enter elements in the array : " << endl;

    for (int i = 0; i < 5; i += 1)
    {
        cin >> arr[i];
    }

    cout << "the smallest number in the array : " << findMin(arr) << endl;
    cout << " and the largest number in the array : " << findMax(arr) << endl;

    return 0;
}