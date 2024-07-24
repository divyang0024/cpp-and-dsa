#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void segregateZeroAndOnes()
{
    int n;
    cout << "enter the size of array : ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cout << "enter either 0 or 1 at index " << i << " : ";
        cin >> v[i];
    }
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        if (v[start] == 0)
            start += 1;
        else
        {
            if (v[end] == 0)
            {
                int temp = v[start];
                v[start] = v[end];
                v[end] = temp;
                start++;
                end--;
            }
            else
            {
                end--;
            }
        }
    }
    for (int i : v)
    {
        cout << i;
    }
}

void findTwoSum()
{
    int n;
    cout << "enter the size of array : ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cout << "enter element at index " << i << " : ";
        cin >> v[i];
    }
    int target;
    cout << "enter target : ";
    cin >> target;
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        if (v[start] + v[end] == target)
        {
            cout << v[start] << " + " << v[end] << " = " << target;
            exit(1);
        }
        else if (v[start] + v[end] > target)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    cout << "no pair exists.";
}

void findPairDifference()
{
    int n;
    cout << "enter the size of array : ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cout << "enter element at index " << i << " : ";
        cin >> v[i];
    }
    int target;
    cout << "enter target : ";
    cin >> target;
    int start = 0;
    int end = start + 1;
    sort(v.begin(), v.end());
    while (end < v.size())
    {
        if (v[end] - v[start] == target)
        {
            cout << v[end] << " - " << v[start] << " = " << target;
            exit(1);
        }
        else if (v[end] - v[start] > target)
        {
            start++;
        }
        else
        {
            end++;
        }
    }
    cout << "no pair exists.";
}

int main()
{
    // segregateZeroAndOnes();
    // findTwoSum();
    findPairDifference();
    return 0;
}