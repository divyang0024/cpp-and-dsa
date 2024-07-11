#include <iostream>
using namespace std;

void swapPos(int greater, int lower, int arr[])
{
    int temp;
    temp = arr[greater];
    arr[greater] = arr[lower];
    arr[lower] = temp;
}

void display(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout << "the element at index " << i << " : " << arr[i] << endl;
    }
}

void selectionSort(int n, int arr[])
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[i] > arr[j])
            {
                swapPos(i, j, arr);
            }
        }
    }
    display(n, arr);
}

void bubbleSort(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = 0;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapped = 1;
                swapPos(j, j + 1, arr);
            }
        }
        if (!swapped)
            break;
    }
    display(n, arr);
}

void insertionSort(int n, int arr[])
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swapPos(j - 1, j, arr);
            }
        }
    }
    display(n, arr);
}

int main()
{
    int n;
    cout << "enter the size of array : ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "enter the element at index " << i << " : " << endl;
        cin >> arr[i];
    }

    // selectionSort(n, arr);
    // bubbleSort(n, arr);
    insertionSort(n, arr);

    return 0;
}