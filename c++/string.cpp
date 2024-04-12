#include <iostream>
using namespace std;

void revStr(string s)
{
    int start = 0;
    int end = s.size() - 1;
    while (start < end)
    {
        swap(s[start], s[end]);
        start++, end--;
    }
    cout << s;
}

int main()
{
    revStr("divyang");
    cout << endl;
    // static string
    char str[10];
    // dynamic string
    string s1 = "abc";
    string s2 = "xyz";
    // append
    string s3 = s1 + s2;
    cout << s3 << endl;
    s3 = s3.append(s2);
    cout << s3 << endl;
    getline(cin, s1); // it supports space and tab.
    // insertion and deletion
    s1.push_back('f');
    cout << s1 << endl;
    s1.pop_back();
    cout << s1 << endl;
    return 0;
}