#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int a = 5, b = 6, c = 0;
    c = a & b;
    cout << "a & b : " << c << endl; // 4
    c = a | b;
    cout << "a | b : " << c << endl; // 7
    c = a ^ b;
    cout << "a ^ b : " << c << endl; // 3
    c = 2 << 1;
    cout << "binary of 2 shited by 1 bit to the left : " << c << endl; // 4
    c = 2 >> 1;
    cout << "binary of 2 shited by 1 bit to the left : " << c << endl; // 1
    cout << c;
}