#include <iostream>
using namespace std;

int countDigits(int value)
{
    int count = 0;
    int newVal = value;
    for (;;)
    {
        newVal = newVal / 10;
        if (newVal != 0)
        {
            ++count;
        }
        else
        {
            return count + 1;
        }
    }
}
int addDigitstillOnesPlace(int value)
{
    int newVal = value;
    while (newVal > 9)
    {
        int sum = 0;
        int rem = 0;
        while (newVal != 0)
        {
            rem = newVal % 10;
            newVal /= 10;
            sum += rem;
        }
        newVal = sum;
    }
    return newVal;
}
int main()
{
    int value, digits;
    cout << "enter a value : ";
    cin >> value;
    digits = countDigits(value);
    cout << addDigitstillOnesPlace(value);
    return 0;
}