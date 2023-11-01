#include <iostream>
using namespace std;

// selection sort ascending.

void swapPos(int lesser, int greater, int arr[])
{
    int temp;
    temp = arr[greater];
    arr[greater] = arr[lesser];
    arr[lesser] = temp;
}

void selectionSort(int arr[], int N)
{
    int index = 0;
    for (int i = 0; i < N - 1; i++) // if n=5,from index[0] to index[3],position 1 to 4.
    {
        for (int j = i + 1; j < N; j++)
        {
            if (arr[j] < arr[i])
            {
                index = j;
                swapPos(index, i, arr);
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int size;
    cout << "enter the size of array : ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter the index[" << i << "] element : ";
        cin >> arr[i];
    }
    selectionSort(arr, size);
    return 0;
}