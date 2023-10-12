#include <iostream>
using namespace std;

int main()
{
    int n1 = 0, n2 = 1, n3, nth;
    cout << "enter value of n to find fibbonacci series : ";
    cin >> nth;
    if (nth < 3)
    {
        if (nth == 1)
        {
            cout << "fibbnacci series of " << nth << " : 0," << n2;
        }
        else
        {
            cout << "fibbnacci series of " << nth << " : " << n1;
        }
    }
    else
    {
        cout << "fibbnacci series of : [0,1,";
        for (int i = 2; i < nth; i++)
        {
            n3 = n1 + n2;
            cout << n3 << ",";
            n1 = n2;
            n2 = n3;
        }
        cout << "...]";
    }
    return 0;
}