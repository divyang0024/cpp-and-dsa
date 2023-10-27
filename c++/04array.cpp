#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int temp = 0;
    for (int i = (size - 1); i >= size / 2; i -= 1)
    {
        temp = arr[i];
        arr[i] = arr[(size - 1) - i];
        arr[(size - 1) - i] = temp;
    }
    cout << "reversed array :  " << endl;
    for (int j = 0; j < size; j += 1)
    {
        cout << arr[j] << endl;
    }
}

int main()
{
    int size;
    cout << "enter size of an array : ";
    cin >> size;
    int arr[size];
    cout << "enter elements inside of an array : " << endl;
    for (int i = 0; i < size; i += 1)
    {
        cin >> arr[i];
    }

    reverseArray(arr, size);

    return 0;
}