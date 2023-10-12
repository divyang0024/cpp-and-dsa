#include <iostream>
using namespace std;

int main()
{
    int num, power, N;
    cout << "enter a number and power respectively : ";
    cin >> num >> power;
    N = num;
    for (int i = 1; i < power; i++)
    {
        N = N * num;
    }
    cout << N;
    return 0;
}