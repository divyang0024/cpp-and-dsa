#include <iostream>
#include <vector>
using namespace std;
// leetcode problem 167.
void twoSum(vector<int> &arr, int sum)
{
    int start = 0;
    int end = arr.size() - 1;

    while (1)
    {
        if ((arr[start] + arr[end]) == sum)
        {
            cout << arr[start] << " + " << arr[end] << " = " << sum;
            break;
        }
        else if ((arr[start] + arr[end]) > sum)
        {
            end -= 1;
        }
        else
        {
            start += 1;
        }
    }
}

int main()
{
    int size, elem;
    cout << "enter size of array : ";
    cin >> size;
    vector<int> arr;
    for (int i = 0; i < size; i++)
    {
        cout << "enter the size of array at [" << i << "] index : ";
        cin >> elem;
        arr.push_back(elem);
    }
    twoSum(arr, 22);
    return 0;
}