#include <iostream>
using namespace std;

int binarySearch(int size, int elem, int array[])
{
    int start = 0;
    int end = size - 1;
    int flag = 0;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (array[mid] == elem)
        {
            cout << "element is present at : " << mid << " index.";
            ++flag;
            break;
        }
        else if (array[mid] < elem)
            start = mid + 1;
        else
            end = mid - 1;
    }
    if (flag == 0)
        cout << "element not found";

    return 0;
}

int main()
{
    int size, elem;
    cout << "enter the size of array : ";
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter the element at [" << i << "] index : ";
        cin >> array[i];
    }
    cout << "------------------" << endl;
    cout << "enter the element you want to search : ";
    cin >> elem;
    binarySearch(size, elem, array);
    return 0;
}