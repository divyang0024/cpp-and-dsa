#include <iostream>
using namespace std;

// swapping
void swap(int greater, int lesser, int array[])
{
    int temp = array[lesser];
    array[lesser] = array[greater];
    array[greater] = temp;
}

// display
void displaySorted(int size, int array[])
{
    for (int i = 0; i < size; i++)
    {
        cout << "the element at index [" << i << "] : " << array[i];
        cout << endl;
    }
}

// selection sort : O(n)
void selectSort(int size, int array[])
{
    int min = INT32_MAX;
    int count = 0;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
                swap(i, j, array);
            ++count;
        }
    }
    cout << count;
}

// bubble sort : O(n*n)
void bubbleSort(int size, int array[])
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < (size - i) - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(j, j + 1, array);
            }
        }
    }
}

// insertion sort
void insertSort(int size, int array[])
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = (i + 1); j > 0; j--)
        {
            if (array[j] < array[j - 1])
            {
                swap(j - 1, j, array);
            }
            else
                break;
        }
    }
}

int main()
{
    int size;
    cout << "enter the size of array : ";
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter the element at index [" << i << "] : ";
        cin >> array[i];
    }

    // selectSort(size, array);
    // bubbleSort(size, array);
    insertSort(size, array);
    displaySorted(size, array);

    return 0;
}