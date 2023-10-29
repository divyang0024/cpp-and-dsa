#include <iostream>
using namespace std;

int main()
{
    int num, i = 2;
    cout << "enter a number to check whether it is prime or not : ";
    cin >> num;
    if (num < 2)
    {
        cout << "not a prime";
    }
    else
    {
        while (i < num)
        {
            if (num % i == 0)
            {
                cout << "not a prime number";
                exit(1);
            }
            ++i;
        }
        cout << "is a prime";
    }
    return 0;
}