#include <iostream>
using namespace std;
// find kth missing value in an sorted array.(leetcode problem 1539).
int findMissing(int size, int k, int arr[])
{
    int start = 0;
    int end = size - 1;
    int ans = size;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] - mid - 1 >= k)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans + k;
}

int main()
{
    int arr[7] = {2,
                  3,
                  4,
                  7,
                  11,
                  12,
                  20};
    cout << findMissing(7, 8, arr);
    return 0;
}