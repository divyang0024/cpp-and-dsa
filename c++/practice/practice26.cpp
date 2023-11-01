#include <iostream>
using namespace std;

// selection sort in descending order

void swapPos(int greater, int lesser, int arr[])
{
    int temp = arr[lesser];
    arr[lesser] = arr[greater];
    arr[greater] = temp;
}
void selectionSort(int arr[], int N)
{
    int index = 0;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (arr[j] > arr[i])
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
    cout << "enter the size of array :  ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter element at index [" << i << "] : ";
        cin >> arr[i];
    }
    selectionSort(arr, size);
    return 0;
}