#include <iostream>
using namespace std;
// find the lowest value in a rotated array.(leetcode problem 153)
int findLowestInRotatedArr(int size, int array[])
{
    int start = 0;
    int end = size - 1;
    int ans = array[0];
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (array[0] <= array[mid])
        {
            start = mid + 1;
        }
        else
        {
            ans = array[mid];
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int arr[5] = {
        3,
        4,
        5,
        1,
        2};
    cout << findLowestInRotatedArr(5, arr);
    return 0;
}