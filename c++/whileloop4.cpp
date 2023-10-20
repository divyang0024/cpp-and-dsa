#include <iostream>
using namespace std;

int main()
{
    int num, i = 1;
    cout << "enter a number : ";
    cin >> num;
    cout << "number the are even till " << num << " : ";
    while (i <= num)
    {
        int temp = i / 2;
        if (temp * 2 == i)
        {
            cout << i << ",";
        }
        i += 1;
    }
    cout << "..";
    return 0;
}