#include <iostream>
using namespace std;

int searchElement(int arr[], int size)
{
    int elem, index[size], i = 0, counter = -1;
    cout << "enter element to find it's index : ";
    cin >> elem;
    while (i < 5)
    {
        if (elem == arr[i])
        {
            counter += 1;
            index[counter] = i;
        }
        i += 1;
    }
    if (counter == -1)
    {
        return counter;
    }
    else
    {
        cout << "list of indexes : [";
        for (int i = 0; i < counter + 1; i += 1)
        {
            cout << index[i];
            cout << ",";
        }
        cout << "]";
        return 1;
    }
}

int main()
{
    int size;
    cout << "enter size of an array : ";
    cin >> size;

    int arr[size];
    cout << "enter elements inside of the array : ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << searchElement(arr, size);

    return 0;
}