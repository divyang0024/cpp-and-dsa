#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "enter first letter of any month : ";
    cin >> ch;

    switch (ch)
    {
    case 'j':
    {
        cout << "January";
        break;
    }
    case 'f':
    {
        cout << "February";
        break;
    }
    case 'm':
    {
        cout << "March";
        break;
    }
    case 'a':
    {
        cout << "April";
        break;
    }
    case 'y':
    {
        cout << "May";
        break;
    }
    case 'u':
    {
        cout << "June";
        break;
    }
    case 'l':
    {
        cout << "July";
        break;
    }
    case 'g':
    {
        cout << "August";
        break;
    }
    case 's':
    {
        cout << "September";
        break;
    }
    case 'o':
    {
        cout << "October";
        break;
    }
    case 'n':
    {
        cout << "November";
        break;
    }
    case 'd':
    {
        cout << "December";
        break;
    }
    default:
    {
        cout << "Wrong input!!!!";
    }
    };
    return 0;
}