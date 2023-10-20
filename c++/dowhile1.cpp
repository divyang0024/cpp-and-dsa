#include <iostream>
using namespace std;

int main()
{
    int i = 1, sum = 0, num;
    cout << "enter a number : ";
    cin >> num;
    do
    {
        sum += i;
        i += 1;
    } while (i <= num);
    cout << sum;
    return 0;
}