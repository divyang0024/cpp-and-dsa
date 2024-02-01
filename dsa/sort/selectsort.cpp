#include <iostream>
using namespace std;

void swapPos(int greater, int smallest, int arr[])
{
    int temp = arr[greater];
    arr[greater] = arr[smallest];
    arr[smallest] = temp;
}

void displaySorted(int array[], int size)
{
    cout << "sorted array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
}

void selectSortAsc(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                swapPos(i, j, arr);
            }
        }
    }
    displaySorted(arr, n);
}

void selectSortDsc(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                swapPos(i, j, arr);
            }
        }
    }
    displaySorted(arr, n);
}

void revSelectSortAsc(int size, int array[])
{
    for (int i = (size - 1); i > 0; i--)
    {
        for (int j = (i - 1); j >= 0; j--)
        {
            if (array[j] > array[i])
            {
                swapPos(i, j, array);
            }
        }
    }
    displaySorted(array, size);
}

void revSelectSortDsc(int size, int array[])
{
    for (int i = (size - 1); i > 0; i--)
    {
        for (int j = (i - 1); j >= 0; j--)
        {
            if (array[j] < array[i])
            {
                swapPos(i, j, array);
            }
        }
    }
    displaySorted(array, size);
}

int main()
{
    int size;
    char choice;
    cout << "enter the size of array : ";
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter the value on [" << i << "] index : ";
        cin >> array[i];
    }
    cout << "type a for ascending select sort otherwise any other character for descending select sort : ";
    cin >> choice;
    if (choice == 'a')
        selectSortAsc(size, array);
    else if (choice == 'd')
        selectSortDsc(size, array);
    else if (choice == 'e')
        revSelectSortAsc(size, array);
    else if (choice == 'h')
        revSelectSortDsc(size, array);
    else
        cout << "wrong input!!!!.";
    return 0;
}