//  <-------------  Problem statement --------------->
// 1. 5 size array
// 2. take input in those array
// 3. total sum print of array

#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    cout << "Enter array data" << endl;
    int n = 5;
    for (int i = 0; i < n; i++) // user input for array data
    {
        cin >> arr[i];
    }

    cout << " Array is : ";

    for (int i = 0; i < n; i++) // print array
    {
        cout << arr[i] << " ";
    }

    // total sum

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "\n Total sum is :" << sum;

    return 0;
}
