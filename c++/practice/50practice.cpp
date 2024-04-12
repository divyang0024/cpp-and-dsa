#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int findAllMissingNumbers(vector<int> arr)
{
    int N = arr.size();
    // reducing the value by 1.
    for (int i = 0; i < N; i++)
    {
        arr[i]--;
    }
    // storing orignal and occurance in the same address space.
    for (int i = 0; i < N; i++)
    {
        arr[arr[i] % N] += N;
    }
    // finding missing element.
    // for (int i = 0; i < N; i++)
    // {
    //     if (arr[i] / N == 0)
    //     {
    //         cout << "the missing element is : " << i + 1 << endl;
    //     }
    // }
    // finding repeating element.
    for (int i = 0; i < N; i++)
    {
        if (arr[i] / N > 1)
        {
            cout << "the repeating element is : " << i + 1 << endl;
        }
    }
}

void findMajorityElement(vector<int> arr)//leetcode problem 169
{
    int candidate = 0, count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (count == 0)
        {
            count = 1;
            candidate = arr[i];
        }
        else
        {
            if (arr[i] == candidate)
                count++;
            else
                count--;
        }
    }
    cout << candidate;
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
    // findAllMissingNumbers(array);
    findMajorityElement(array);
    return 0;
}