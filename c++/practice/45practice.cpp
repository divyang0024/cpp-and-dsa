#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int maxDiffBwElem1(int size, int array[], int pos)
{
    int suffix = array[size - 1];
    int maxDiff = INT16_MIN, temp;
    for (int i = size - 2; i >= pos - 1; i--)
    {
        temp = abs((suffix - array[i]));
        cout << temp;
        if (array[i] > suffix)
        {
            suffix = array[i];
        }
        if (maxDiff < temp)
        {
            maxDiff = temp;
        }
    }
    cout << maxDiff;
}
// int maxDiffBwElem2(int size, int array[], int pos)
// {
//     int maxVal = INT16_MIN;
//     for (int i = size - 1; i >= pos - 1; i--)
//     {
//         if (maxVal < array[i])
//         {
//             maxVal = array[i];
//         }
//     }
//     cout << maxVal - array[pos - 1];
// }//not possibile can the intial value can be max.

int main()
{
    int size, elem, pos;
    cout << "enter size of array : ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter the size of array at [" << i << "] index : ";
        cin >> arr[i];
    }
    cout << "enter the position from where you want to find the max difference";
    cin >> pos;
    maxDiffBwElem1(size, arr, pos);
    return 0;
}