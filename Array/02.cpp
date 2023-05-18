// pass by reference int *arr or int arr[]
#include <iostream>
using namespace std;

void printArray(int arr[])
{
    cout << "Size in FUNCTION: " << sizeof(arr);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr);
    cout << "Size in MAIN: " << n << endl;
    printArray(arr);
    return 0;
}