#include <iostream>
using namespace std;

void rotateArrayByOne(int arr[], int N)
{
    int last = arr[N - 1];
    for (int i = N - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
    cout << "-------" << endl;
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
    int array[size];
    cout << "enter elements inside of array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    rotateArrayByOne(array, size);
    return 0;
}