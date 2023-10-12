#include <iostream>
using namespace std;

int main()
{ // natural numbers are positive integer which ranges between 1 to infinity.
    int n, sum = 0;
    cout << "enter value of n to find sum n natural number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << sum;
    return 0;
}