#include <iostream>
using namespace std;

int main()
{ // natural numbers are positive integer which ranges between 1 to infinity.
    int n, fact = 1;
    cout << "enter the value to find factorial : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << fact;
    return 0;
}