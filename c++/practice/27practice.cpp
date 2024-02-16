#include <iostream>
using namespace std;

// first occurance
int firstOccur(int size, int elem, int array[])
{
    int first = -1;
    int mid;
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (array[mid] == elem)
        {
            first = mid;
            end = mid - 1;
        }
        else if (array[mid] < elem)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return first;
}
int lastOccur(int size, int elem, int array[])
{
    int last = -1;
    int mid;
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (array[mid] == elem)
        {
            last = mid;
            start = mid + 1;
        }
        else if (array[mid] < elem)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return last;
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
    cout << "the first occurance is at index : " << firstOccur(size, elem, array) << " and last occurance is at index : " << lastOccur(size, elem, array);
    return 0;
}