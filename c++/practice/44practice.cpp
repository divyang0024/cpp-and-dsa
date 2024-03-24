#include <iostream>
#include <vector>
using namespace std;

int largestSumContigousSubArray(int size, vector<int> &array)
{
    int prefix = 0;
    int MaxSubarray = INT16_MIN;
    for (int i = 0; i < size; i++)
    {
        prefix += array[i];
        if (prefix < 0)
            prefix = 0;
        if (prefix > MaxSubarray)
            MaxSubarray = prefix;
    }
    cout << MaxSubarray;
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
    largestSumContigousSubArray(size, arr);
    return 0;
}