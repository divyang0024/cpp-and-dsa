#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int maxDiffBwElem1(int size, int array[], int pos)
{
    int maxDiff = INT16_MIN;
    int maxR = array[size - 1];
    int diff = 0;
    for (int i = size - 2; i >= pos - 1; i--)
    {
        diff = (array[i] - maxR);
        if (diff > maxDiff)
        {
            maxDiff = diff;
        }
        if (array[i] > maxR)
        {
            maxR = array[i];
        }
    } // 9,5,8,12,2,3,7,4
    cout << maxDiff;
}

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