#include <iostream>
using namespace std;

int main()
{
    int month;
    cout << "enter number to get its corresponding month : ";
    cin >> month;
    switch (month)
    {
    case 1:
        cout << "jan";
        break;
    case 2:
        cout << "feb";
        break;
    case 3:
        cout << "mar";
        break;
    case 4:
        cout << "april";
        break;
    case 5:
        cout << "may";
        break;
    case 6:
        cout << "june";
        break;
    case 7:
        cout << "july";
        break;
    case 8:
        cout << "aug";
        break;
    case 9:
        cout << "sept";
        break;
    case 10:
        cout << "oct";
        break;
    case 11:
        cout << "nov";
        break;
    case 12:
        cout << "dec";
        break;
    default:
        cout << "sike!!!! thats the wrong number.";
        break;
    }
    return 0;
}