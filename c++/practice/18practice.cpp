#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "enter age to check whether you are a teenager or not : ";
    cin >> age;
    if (age <= 19 && age >= 13)
    {
        cout << "you are a teenager.";
    }
    else
    {
        cout << "you are not a teenager.";
    }
    return 0;
}