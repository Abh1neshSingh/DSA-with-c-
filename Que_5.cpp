//  <-------------  Problem statement --------------->
// Liner Search in array
// given an array and search target in array
// as like ---> arr[5]={2,4,6,8,10}  and  target=10
// if we find target then print found or not found
// using ----------------------------------------->>>>> array and function
#include <iostream>
using namespace std;

void arrayPrint(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// present--> true
// absent---> false
// so true and false is boolean we use bool funcation
bool linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }
    return false;
}

int main()
{

    int arr[5] = {2, 4, 6, 8, 10};
    int size = 5;
    int target = 10;
    bool ans = linearSearch(arr, size, target);
    if (ans == 1)
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }

    return 0;
}
