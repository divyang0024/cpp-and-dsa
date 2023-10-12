#include <iostream>
using namespace std;

int main()
{
    cout << "printing a to z alphabets : " << endl;
    for (char i = 97; i <= 122; i++)
    {
        cout << "------------------\n";
        cout << "upper case : ";
        cout << i << endl;
        cout << "lower case : ";
        cout << (char)(i - 32) << endl;
        cout << "------------------\n";
    }

    return 0;
}