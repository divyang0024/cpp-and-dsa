#include <iostream>
using namespace std;

int findIndex(int size, int elem, int array[])
{
    int ans;
    int mid;
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (array[mid] == elem)
        {
            ans = mid;
            return mid;
        }
        else if (array[mid] < elem)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int size, elem;
    cout << "enter the size of array : ";
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter the element at index [" << i << "] : ";
        cin >> array[i];
    }
    cout << "enter the value to find its first and last occurance : ";
    cin >> elem;
    cout << findIndex(size, elem, array);
    return 0;
}