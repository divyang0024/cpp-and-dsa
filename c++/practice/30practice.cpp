#include <iostream>
using namespace std;

// find peak index in a mountain.(leetcode problem 852)
int findPeakIndex(int size, int array[])
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        int prev = mid - 1;
        int next = mid + 1;
        if (array[mid] > array[prev] && array[mid] > array[next])
        {
            return array[mid];
        }
        else if (array[mid] > array[prev] && array[mid] < array[next])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
}

int main()
{
    // array should be like 2,4,6,8,6,4,2
    int size, elem;
    cout << "enter the size of array : ";
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter the element at index [" << i << "] : ";
        cin >> array[i];
    }
    cout << "the peak element is : " << findPeakIndex(size, array);
    return 0;
}