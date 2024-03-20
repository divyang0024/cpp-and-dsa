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

int main()
{
    int r, c;
    cout << "enter number of row : ";
    cin >> r;
    cout << "enter number of column : ";
    cin >> c;
    int arr[r][3];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "enter element at index [" << i << "][" << j << "] : ";
            cin >> arr[i][j];
        }
    }

    // printWaveForm(r, c, arr);
    printSpiralForm(r, c, arr);

    return 0;
}