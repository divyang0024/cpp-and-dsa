#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "enter the number of rows you want to have in star pattern : ";
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}