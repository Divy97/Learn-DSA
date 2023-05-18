#include <iostream>
using namespace std;

int main()
{
    int marks[100];

    int n;
    cout << "Enter the no of Students: ";
    cin >> n;

    cout << "Enter the marks: ";
    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
    }

    cout << "Marks of students:";
    for (int i = 0; i < n; i++)
    {
        cout << marks[i] << ",";
    }

    cout << endl;
    cout << marks[99];
    return 0;
}