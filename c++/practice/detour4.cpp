#include <iostream>
using namespace std;

int findMin(int array[], int n)
{
    int newMin = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        if (array[i] < newMin)
        {
            newMin = array[i];
        }
    }
    return newMin;
}

int findMax(int array[], int n)
{
    int newMax = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        if (array[i] > newMax)
        {
            newMax = array[i];
        }
    }
    return newMax;
}

int main()
{
    int size, i = 0;
    cout << "enter the size : ";
    cin >> size;
    int arr[size];
    while (i < size)
    {
        cout << "enter the value at [" << i << "] index : ";
        cin >> arr[i];
        ++i;
    }
    cout << "the smallest number in the array : " << findMin(arr, size) << " and the greatest number in the array : " << findMax(arr, size);
    return 0;
}