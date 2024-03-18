#include <vector>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int findThreeSum(int size, int sum, vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    for (int i = 0; i < size - 2; i++)
    {
        int ans = sum - arr[i];
        int start = i + 1, end = size - 1;
        while (start < end)
        {
            if (arr[start] + arr[end] == ans)
            {
                return 1;
            }
            else if ((arr[i] + arr[start] + arr[end]) > sum)
                end--;
            else
                start++;
        }
    }

    return 0;
}

int main()
{
    int size, sum;
    cout << "enter the size of vector : ";
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cout << "enter the element at index [" << i << "] : ";
        cin >> arr[i];
    }
    cout << "enter the sum : ";
    cin >> sum;
    if (findThreeSum((size), sum, arr))
    {
        cout << "3 number sum exists";
    }
    else
    {
        cout << "3 number sum does not exist";
    }
    return 0;
}