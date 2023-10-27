#include <iostream>
#include <climits>
using namespace std;

int secondGreatest(int arr[], int size)
{
    int g1 = INT_MIN, g2 = 0;
    for (int i = 0; i < size; i += 1)
    {
        if (arr[i] > g1)
        {
            g1 = arr[i];
        }
    };
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != g1)
        {
            if (arr[i] > g2)
            {
                g2 = arr[i];
            }
        }
    }
    return g2;
}

int main()
{
    int size;
    cout << "enter the size of array : ";
    cin >> size;
    int arr[size];
    cout << "enter elements inside of the array : " << endl;

    for (int i = 0; i < size; i += 1)
    {
        cin >> arr[i];
    }
    cout << secondGreatest(arr, size);

    return 0;
}