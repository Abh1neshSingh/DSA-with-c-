#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 4, 5};
    int brr[5] = {1, 3, 4, 3, 4};
    int crr[5] = {2, 4};

    int n = 5;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << crr[i] << " ";
    }
    cout << endl;

    cout << arr[0] << endl;
    cout << sizeof(arr) / sizeof(arr[0]);

    return 0;
}
