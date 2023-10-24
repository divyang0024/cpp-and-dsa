#include <iostream>
#include <math.h>
using namespace std;
int coutDigit(int num)
{
    int reminder = 0;
    int ans = 0;
    int power = 0;
    while (num != 0)
    {
        reminder = num % 10;
        num /= 10;
        ++power;
    }
    return power;
}
void checkArmstrongNumber(int num)
{
    if (num <= 9)
    {
        cout << num << " is a Armstrong Number!!!!.";
    }

    else
    {
        int temp = num;
        int reminder = 0;
        int ans = 0;
        int power = coutDigit(temp);

        while (temp != 0)
        {
            reminder = temp % 10;
            temp /= 10;
            ans += pow(reminder, power);
        }

        if (ans == num)
            cout << num << " is a Armstrong Number!!!!.";
        else
            cout << num << " is not a Armstrong Number!!!!.";
    }
}

int main()
{
    int num;
    cout << "enter a number : ";
    cin >> num;
    checkArmstrongNumber(num);
    return 0;
}