#include <iostream>
#include <vector>
using namespace std;

int prefixSum(int size, int array[])
{
    vector<int> arr(1);
    arr[0] = array[0];

    for (int i = 1; i < size; i++)
    {
        arr[i] = arr[i - 1] + array[i];
    }
    cout << arr[size - 1];
}
void sufixSum(int size, int array[])
{
    vector<int> arr(1);
    arr[size - 1] = array[size - 1];

    for (int i = size - 2; i >= 0; i--)
    {
        arr[i] = arr[i + 1] + array[i];
    }
    cout << arr[0];
}
void countSubArr(int size, int array[])
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < (size - i); j++)
        {
            count += 1;
            cout << "{";
            for (int k = j; k <= j + i; k++)
            {
                cout << array[k] << ",";
            }
            cout << "}" << endl;
        }
    }
    cout << count;
}

int main()
{
    int size;
    cout << "enter the size of array : ";
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter an element at [" << i << "] index : ";
        cin >> array[i];
    }
    // prefixSum(size, array);
    // sufixSum(size, array);
    countSubArr(size, array);
    return 0;
}