#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int findAMissingAndRepeatingVal(vector<int> arr)
{
    int N = arr.size();
    // reducing the value by 1.
    for (int i = 0; i < N; i++)
    {
        arr[i]--;
    }
    // storing origanl and occurance in the same address space.
    for (int i = 0; i < N; i++)
    {
        arr[arr[i] % N] += N;
    }
    // finding missing element.
    for (int i = 0; i < N; i++)
    {
        if (arr[i] / N == 0)
        {
            cout << "the missing element is : " << i + 1 << endl;
        }
    }
    // finding repeating element.
    for (int i = 0; i < N; i++)
    {
        if (arr[i] / N == 2)
        {
            cout << "the repeating element is : " << i + 1 << endl;
            break;
        }
    }
}

int main()
{
    int size;
    cout << "enter the size of array : ";
    cin >> size;
    vector<int> array(size, 0);
    for (int i = 0; i < size; i++)
    {
        cout << "enter an element at [" << i << "] index : ";
        cin >> array[i];
    }
    findAMissingAndRepeatingVal(array);
    return 0;
}