#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int n = 5;
    // for input
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value for index :" << i << " ";
        cin >> arr[i];
        cout << endl;
    }

    // for print
    cout << "print the array---->";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
