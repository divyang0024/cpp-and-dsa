#include <iostream>
#include <vector>
using namespace std;

int binarySearchIn2dArr(vector<vector<int>> &arr, int r, int c, int target) // leetcode problem 74.
{
    int start = 0;
    int end = (arr.size() * (arr[0].size())) - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[(mid / c)][(mid % c)] == target)
        {
            return 1;
        }
        else if (arr[(mid / c)][(mid % c)] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return 0;
}

int searchInSortedColRow2dArr(vector<vector<int>> &arr, int r, int c, int target)
{
    int i = 0;
    int j = (arr[0].size()) - 1;
    while (i < r && j >= 0)
    {
        if (arr[i][j] == target)
        {
            return 1;
        }
        else if (arr[i][j] < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return 0;
}

int main()
{
    int target;
    int row, column;
    cout << "enter the number of rows and columns respectively : ";
    cin >> row >> column;
    vector<vector<int>> arr(row, vector<int>(column, 0));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "enter element at [" << i << "]"
                 << "[" << j << "] : ";
            cin >> arr[i][j];
        }
    }
    cout << "enter the element you want to search : ";
    cin >> target;
    // if (binarySearchIn2dArr(arr, row, column, target))
    // {
    //     cout << "element found";
    // }
    // else
    // {
    //     cout << "element does not exist";
    // }
    if (searchInSortedColRow2dArr(arr, row, column, target))
    {
        cout << "element found";
    }
    else
    {
        cout << "element does not exist";
    }
    return 0;
}