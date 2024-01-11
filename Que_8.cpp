//  <-------------  Problem statement --------------->
// Reverse of an array
// like :--------------Input: [1,2] -> Output:[2,1]
//  It is done by using two variable like one varible set on index 0 and one variable set on size-1;
//   then swap the values by  (Swap) utitly function
// after that increment variable 1 and decrement variable 2

#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    for (int left = 0, right = size - 1; left <= right; left++, right--)
    {
        swap(arr[left], arr[right]);
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int size = 6;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    reverseArray(arr, size);

    return 0;
}
