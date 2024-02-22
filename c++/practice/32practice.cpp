#include <iostream>
using namespace std;

// search value in a rotated array.(leetcode problem 33.)
int searchIndexInRotatedArr(int size, int elem, int array[])
{
    int ans = -1;
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (array[mid] == elem)
        {
            return mid;
        }
        else if (array[start] <= array[mid])
        {
            if (array[0] <= elem && array[mid] > elem)
            {
                end = mid - 1;
            }
            else
                start = mid + 1;
        }
        else
        {
            if (array[mid] <= elem && array[end] >= elem)
            {
                start = mid + 1;
            }
            else
                end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int arr[5] = {
        5,
        1,
        2,
        3,
        4,
    };
    cout << searchIndexInRotatedArr(5, 6, arr);
    return 0;
}