#include <iostream>
using namespace std;

int main()
{
    int temp;
    cout << "enter temperature : ";
    cin >> temp;
    if (temp >= 70 && temp <= 90)
    {
        cout << "suitable for swimming";
    }
    else if (temp < 70)
    {
        cout << "water to cold!!!!.";
    }
    else
    {
        cout << "water to hot!!!!.";
    }
    return 0;
}