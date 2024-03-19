#include <iostream>
using namespace std;

void searchElemIn2dArr(int r, int c, int target, int arr[][3])
{
    bool flag = false;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == target)
            {
                cout << "element is present at index [" << i << "," << j << "].";
                flag = !flag;
                break;
            }
        }
    }
    if (!flag)
    {
        cout << "element not found.";
    }
}

void add2dArr(int r, int c, int arr[][3])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "[" << arr[i][j] + arr[i][j] << "] ";
            if (j == c - 1)
            {
                cout << endl;
            }
        }
    }
}

void maxSumRow(int r, int c, int arr[][3])
{
    int max = 0;
    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            sum += arr[i][j];
        }
        if (sum > max)
        {
            max = sum;
        }
    }
    cout << max;
}

void diagonalSum(int r, int c, int arr[][3])
{
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = i; j <= i; j++)
        {
            sum1 += arr[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = c - i; j >= i; j--)
        {
            sum2 += arr[i][j];
        }
    }
    cout << sum1;
}

void rowReverse(int r, int c, int arr[][3])
{
    int colMid = c % 2 == 0 ? (c / 2) - 1 : (c / 2);
    for (int i = 0; i < r; i++)
    {
        int start = 0;
        int end = c - 1;
        for (int j = 0; j <= colMid; j++)
        {
            int temp = arr[i][start];
            arr[i][start] = arr[i][end];
            arr[i][end] = temp;
            start += 1;
            end -= 1;
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "[" << arr[i][j] << "] ";
            if (j == c - 1)
            {
                cout << endl;
            }
        }
    }
}

int main()
{
    int r, c = 3, elem;
    cout << "enter number of row : ";
    cin >> r;

    int arr[r][3];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "enter element at index [" << i << "][" << j << "] : ";
            cin >> arr[i][j];
        }
    }

    // cout << "enter the element you want to search";
    // cin >> elem;

    // searchElemIn2dArr(r, c, elem, arr);
    // add2dArr(r, c, arr);
    // maxSumRow(r, c, arr);
    // diagonalSum(r, c, arr);
    rowReverse(r, c, arr);

    return 0;
}