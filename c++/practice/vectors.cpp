#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(5);
    sort(v.begin(), v.end());   // sorts the array.
    v.push_back(12);            // enters a new value at the end.
    v.pop_back();               // remove the last element.
    v.erase(v.begin());         // removes the element at a particular index.
    v.insert(v.begin() + 0, 2); // insert a new element at a given place.
    cout << v.front() << endl;  // return element present at index 0.
    cout << v.back() << endl;   // return element present at index 0.
    cout
        << v.size() << endl;      // returns size.
    cout << v.capacity() << endl; // returns capacity(meaning that even empty spaces count).
    v.clear();                    // removes all the possible values present indide of vector.
    return 0;
}