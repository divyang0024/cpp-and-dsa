#include <iostream>
#include <vector>
using namespace std;

void segregateOddAndEven(vector<int> &arr)
{
    int temp;
    int start = 0;
    int end = arr.size() - 1;
    while (start < end)
    {
        if (arr[start] % 2 == 0)
        {
            start++;
        }
        else if (arr[end] % 2 != 0)
        {
            end -= 1;
        }
        else
        {
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }
}

int main()
{
    int size;
    cout << "enter the size of vector : ";
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cout << "enter the element at index [" << i << "] : ";
        cin >> arr[i];
    }
    segregateOddAndEven(arr);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}