#include <iostream>
using namespace std;

// perform alphabetical selection sort in ascending order.

void swapPos(int lesser, int greater, char arr[])
{
    int temp = arr[greater];
    arr[greater] = arr[lesser];
    arr[lesser] = temp;
}

void selectionSort(char arr[], int arrSize)
{
    int index = 0;
    bool swapped = false;
    for (int i = 0; i < arrSize - 1; i++)
    {
        for (int j = i + 1; j < arrSize; j++)
        {
            if (arr[j] < arr[i])
            {
                index = j;
                swapPos(index, i, arr);
                swapped = true;
            }
        }
    }
    if (!swapped)
    {
        cout << "array is already ordered in ascending order!!!!";
    }
    else
    {
        cout << "list of sorted elements in descending order : " << endl;
        for (int i = 0; i < arrSize; i++)
        {
            cout << arr[i] << endl;
            
        }
    }
}

int main()
{
    int size;
    cout << "enter size of array : ";
    cin >> size;
    char arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter element at index [" << i << "] : ";
        cin >> arr[i];
    }

    selectionSort(arr, size);

    return 0;
}