#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter a Size of an array: ";
    cin >> size;

    int array[size];
    cout << "Enter elements of an array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << "Array Elements: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}