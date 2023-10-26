#include <iostream>
using namespace std;

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};     // array with specified size and concurrent declaration and intialization.
    int arr2[] = {12, 22, 32, 42, 52}; // array with specified size and concurrent declaration and intialization.
    arr2[5] = {67};
    for (int i = 0; i < 6; i++)
    {
        cout << arr2[i] << endl;
    }
    int arr3[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr3[i];
    }                       // taking input from user with help of iteration.
    int arr4[5] = {12, 22}; // array with specified size but incomplete intialization.

    int arr5[5] = {2}; // all the memory spaces will be intialized as 0 but it only works for 0.
    for (int i = 0; i < 5; i++)
    {
        cout << arr5[i];
    }
    return 0;
}