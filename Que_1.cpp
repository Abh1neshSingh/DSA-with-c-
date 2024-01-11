//  <-------------  Problem statement --------------->
// 1. 10 size array
// 2. take input in that array
// 3. double -up each value of that array

#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int n = 10;
    cout << "Enter 10 value  of arr:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << " My array data are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // double-up
    for (int i = 0; i < n; i++)
    {
        arr[i] = 2 * arr[i];
    }
    cout << "\nDouble up my array is :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
