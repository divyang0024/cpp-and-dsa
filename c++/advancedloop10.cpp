#include <iostream>
using namespace std;

int main()
{
    int n, num;
    cout << "enter a number to check wheather it is prime or not : ";
    cin >> num;
    if (n < 2)
    {
        cout << num << "it is not a prime number : ";
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (num % i == 0)
            {
                cout << num << " is not a prime number!!!!";
                return 0;
            }
        }
        cout << num << " is a prime number!!!!";
    }
    return 0;
}