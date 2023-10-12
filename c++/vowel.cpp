#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "enter a letter to check wheather it is vowel : ";
    cin >> ch;
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    {
        cout << "the character you entered is a vowel!!!!.";
    }
    else
    {
        cout << "the character you entered is consonant!!!!.";
    }
    return 0;
}