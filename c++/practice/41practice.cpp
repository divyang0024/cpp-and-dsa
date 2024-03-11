#include <iostream>
#include <vector>
using namespace std;

int findPairDifference(int target, vector<int> &arr)
{
    int start = 0;
    int end = 1;
    int ans = -1;
    while (1)
    {
        if ((arr[end] - arr[start]) == target)
        {
            return 1;
        }
        else if ((arr[end] - arr[start]) > target)
        {
            start += 1;
        }
        else
        {
            end += 1;
        }
    }
    return 0;
}

int main()
{
    vector<int> arr;
    int size;
    cout << "enter the size of array : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    { // input ascending order
        int elem;
        cout << "enter the element at index [" << i << "] index : ";
        cin >> elem;
        arr.push_back(elem);
    }

    if (findPairDifference(45, arr))
    {
        cout << "answer found";
    }
    else
    {
        cout << "answer not found";
    }

    return 0;
}
