#include <iostream>
using namespace std;

void swapPos(int lesser, int greater, int array[])
{
    int temp = array[lesser];
    array[lesser] = array[greater];
    array[greater] = temp;
}

void display(int size, int array[])
{
    cout << "sorted array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "[" << array[i] << "]" << endl;
    }
}

void insertSortAsc(int size, int array[])
{
    for (int i = 1; i < size; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (array[j] < array[j - 1])
                swapPos(j, j - 1, array);
            else
                break;
        }
    }
    display(size, array);
}

void revInsertSortAsc(int size, int array[])
{
    for (int i = size - 2; i >= 0; i--)
    {
        for (int j = i; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
                swapPos(j + 1, j, array);
            else
                break;
        }
    }
    display(size, array);
}

void revInsertSortDsc(int size, int array[])
{
    for (int i = size - 2; i >= 0; i--)
    {
        for (int j = i; j < size - 1; j++)
        {
            if (array[j] < array[j + 1])
                swapPos(j + 1, j, array);
            else
                break;
        }
    }
    display(size, array);
}

void insertSortDsc(int size, int array[])
{
    for (int i = 1; i < size; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (array[j] > array[j - 1])
                swapPos(j, j - 1, array);
            else
                break;
        }
    }
    display(size, array);
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
        cout << "enter the value at [" << i << "] index : ";
        cin >> array[i];
    }

    // insertSortAsc(size, array);
    // insertSortDsc(size, array);
    // revInsertSortAsc(size, array);
    // revInsertSortDsc(size, array);

    return 0;
}