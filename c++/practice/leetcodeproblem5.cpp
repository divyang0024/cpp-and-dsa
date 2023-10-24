#include <iostream>
using namespace std;

void convertLowerToUpper(char lowerCase)
{
    cout << "converting lowercase of " << lowerCase << " into uppercase : " << (char)(((int)lowerCase) - 32);
}

int main()
{
    char ch;
    cout << "enter an alphabet in lowercase : ";
    cin >> ch;
    convertLowerToUpper(ch);
    return 0;
}