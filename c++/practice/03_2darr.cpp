#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

void printWaveForm(int r, int c, int arr[][3])
{
    for (int i = 0; i < r; i++)
    {
        int rowDetect = i % 2;
        int rowReq = rowDetect == 0 ? 0 : (r - 1);
        int waveDir = rowDetect == 0 ? (r - 1) : 0;
        for (int j = rowReq; rowDetect == 0 ? (j <= waveDir) : j >= waveDir; rowDetect == 0 ? j++ : j--)
        {
            cout << arr[j][i];
        }
    }
}

void printSpiralForm(int r, int c, int arr[][3]) // leetcode problem 54.
{
    int left = 0;
    int right = c - 1;
    int top = 0;
    int bottom = r - 1;

    while (left <= right && top <= bottom)
    {
        for (int i = left; i <= right; i++) // move left
        {
            cout << arr[top][i];
        }
        top++;
        for (int i = top; i <= bottom; i++) // move down
        {
            cout << arr[i][right];
        }
        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--) // move left
            {
                cout << arr[bottom][i];
            }
            bottom--;
        }

        if (left <= bottom)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << arr[i][left];
            }
            left++;
        }
    }
}

void printTransposedMatrix(int r, int c, int arr[][3])
{
    for (int i = 0; i < r - 1; i++)
    {
        for (int j = i + 1; j < r; j++)
        {
            swap(arr[j][i], arr[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << arr[i][j];
        }
    }
}

void rotateArrBy90Deg(int n, vector<vector<int>> &arr) // leetcode problem 48
{
    vector<vector<int>> temp = arr;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            // swap(arr[(n - 1) - i][j], arr[j][i]);
            // cout << ((n - 1) - i) << j << "->" << j << i;
            arr[j][i] = temp[(n - 1) - i][j];
        }
    }
}
void rotateArrBy90DegAnticlockwise(int n, vector<vector<int>> &arr) // leetcode problem 48
{
    vector<vector<int>> temp = arr;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            // cout << "[" << ((n - 1) - i) << j << "]"
            //      << "->" << ((n - 1) - j) << ((n - 1) - i);
            arr[(n - 1) - j][((n - 1) - i)] = temp[((n - 1) - i)][j];
            // cout << endl;
        }
    }
}

void rotateArrBy180Deg(int n, int arr[][3])
{
    int ans[3][3];
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            // cout << ((n - 1) - i) << j << "->" << i << ((n - 1) - j);
            ans[i][((n - 1) - j)] = arr[(n - 1) - i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }
}

void rotateArrKtimesClockwiseAndAnticlockwise(int n, vector<vector<int>> &arr)
{
    char choice;
    cout << "enter c for clockwise and a for anticlockwise : ";
    cin >> choice;
    int k;
    cout
        << "number of times you want to perform rotation : ";
    cin >> k;
    switch (choice)
    {
    case 'c':
    {
        for (int i = 0; i < k; i++)
        {
            rotateArrBy90Deg(n, arr);
        }
    }
    break;
    case 'a':
    {
        for (int i = 0; i < k; i++)
        {
            rotateArrBy90Deg(n, arr);
        }
    }
    break;
    default:
    {
        cout << "misinput!!!! please enter a valid expression.";
        break;
    }
    }
}

int main()
{
    int r, c;
    cout << "enter number of row : ";
    cin >> r;
    cout << "enter number of column : ";
    cin >> c;
    vector<vector<int>> arr(r, vector<int>(r, 0));

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "enter element at index [" << i << "][" << j << "] : ";
            cin >> arr[i][j];
        }
    }

    // printWaveForm(r, c, arr);
    // printSpiralForm(r, c, arr);
    // printTransposedMatrix(r, c, arr);
    // rotateArrBy90Deg(r, arr);
    // rotateArrBy180Deg(r, arr);
    // rotateArrBy90DegAnticlockwise(r, arr);
    rotateArrKtimesClockwiseAndAnticlockwise(r, arr);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}