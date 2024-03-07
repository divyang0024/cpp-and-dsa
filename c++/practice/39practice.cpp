#include <iostream>
#include <vector>

using namespace std;

void Segregate1And0s(vector<int> &arr)
{
    int start = 0;
    int end = (arr.size() - 1);
    while (start < end)
    {
        if (arr[start] == 0)
        {
            start += 1;
        }
        else
        {
            if (arr[end] == 0)
            {
                int temp;
                temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;
                start += 1;
                end -= 1;
            }
            else
            {
                end -= 1;
            }
        }
    }
}

int main()
{
    int size, elem;
    cout << "enter size of array : ";
    cin >> size;
    vector<int> arr;
    for (int i = 0; i < size; i++)
    {
        cout << "enter the size of array at [" << i << "] index : ";
        cin >> elem;
        arr.push_back(elem);
    }

    Segregate1And0s(arr);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}