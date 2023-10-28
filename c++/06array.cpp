#include <iostream>
using namespace std;

void fiboArray(int arr[], int N)
{
    int n1, n2, n3;
    n1 = arr[0];
    n2 = arr[1];
    n3 = n1 + n2;
    cout << n1 << endl;
    for (int i = 2; i <= N; i++)
    {
        arr[i] = n3;
        arr[i - 2] = arr[i - 1];
        arr[i - 1] = n3;
        n3 = arr[i - 2] + arr[i - 1];
    }
    for (int j = 0; j < N; j++)
    {
        cout << arr[j] << endl;
    }
}

int main()
{
    int pos, size;
    cout << "enter the position of element in the fibonacci series : ";
    cin >> pos;
    size = pos - 1;
    int arr[] = {0, 1};
    fiboArray(arr, size);
    return 0;
}