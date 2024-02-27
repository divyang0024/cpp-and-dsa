#include <iostream>
#include <algorithm>
using namespace std;

int bookAllocationWithLeastPageDisparityBwStudents(int students, int books, int array[])
{

    if (students > books)
    {
        return -1;
    }
    int start = 0;
    int end = 0;
    int ans = 0;
    for (int i = 0; i < books; i++)
    {
        start = max(start, array[i]);
        end += array[i];
    }
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int count = 1;
        int pages = 0;
        for (int i = 0; i < books; i++)
        {
            pages += array[i];
            if (pages > mid)
            {
                count += count;
                pages = array[i];
            }
        }
        if (count <= students)
        {
            ans = mid; // possible pages required by each student.
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return ans;
}

int main()
{
    int books, students;
    cout << "enter the number of books : ";
    cin >> books;
    int array[books];
    for (int i = 0; i < books; i++)
    {
        cout << "enter the pages in book " << i + 1 << " : ";
        cin >> array[i];
    }
    cout << "enter number of students : ";
    cin >> students;
    cout << "max page required by each student if the number of student are " << students << " : " << bookAllocationWithLeastPageDisparityBwStudents(students, books, array);

    return 0;
}