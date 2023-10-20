#include <iostream>
using namespace std;

int main()
{
    int num, i = 1;
    cout << "enter a number to get its factor : ";
    cin >> num;
    while (i <= num)
    {
        if (num % i == 0)
        {
            cout << i << " is a factor of " << num << endl;
        }
        i += 1;
    }
    return 0;
}