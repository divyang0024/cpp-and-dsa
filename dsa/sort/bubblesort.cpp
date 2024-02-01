#include <iostream>
using namespace std;

void swapPos(int lesser, int greater, int array[])
{
    int temp;
    temp = array[lesser];
    array[lesser] = array[greater];
    array[greater] = temp;
}

void bubbleSortAsc(int size, int array[])
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < (size - i) - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swapPos(j + 1, j, array);
            }
        }
    }
}

void revBubbleSortAsc(int size, int array[])
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = size - 1; j > i; j--)
        {
            if (array[j] < array[j - 1])
            {
                swapPos(j - 1, j, array);
            }
        }
    }
}

void bubbleSortDsc(int size, int array[])
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < (size - i) - 1; j++)
        {
            if (array[j] < array[j + 1])
            {
                swapPos(j, j + 1, array);
            }
        }
    }
}

void revBubbleSortDsc(int size, int array[])
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = size - 1; j > i; j--)
        {
            if (array[j] > array[j - 1])
            {
                swapPos(j - 1, j, array);
            }
        }
    }
}

void displaySorted(int size, int array[])
{
    cout << "---------------------" << endl;
    cout << "sorted array : " << endl;
    cout << " " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "value at [" << i << "] index : " << array[i] << endl;
    }
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

    cout << "'a' for ascending bubble sort and 'd' for descending bubble sort : ";
    cin >> choice;

    if (choice == 'a' || choice == 'A')
    {
        revBubbleSortAsc(size, array);
        displaySorted(size, array);
    }
    else if (choice == 'd' || choice == 'D')
    {
        bubbleSortDsc(size, array);
        displaySorted(size, array);
    }
    else if (choice == 'e' || choice == 'E')
    {
        revBubbleSortAsc(size, array);
        displaySorted(size, array);
    }
    else if (choice == 'h' || choice == 'H')
    {
        revBubbleSortDsc(size, array);
        displaySorted(size, array);
    }
    else
    {
        cout << "input is wrong!!!!.";
    }

    return 0;
}