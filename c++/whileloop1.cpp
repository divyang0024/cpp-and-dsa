#include <iostream>
using namespace std;

int main()
{

    int tableOf;
    int count = 1;
    cout << "enter  a number to get its table : ";
    cin >> tableOf;
    while (count <= 10)
    {
        cout << tableOf
             << " X " << count << " : " << tableOf * count << endl;
        count += 1;
    }
    return 0;
}