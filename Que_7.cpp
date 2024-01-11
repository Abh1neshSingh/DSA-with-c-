//  <-------------  Problem statement --------------->
// min number in an Array

#include <iostream>
#include <limits.h>
// There are two limits funcation
// 1. INT_MIN   for find min number
// 2. INT_MAX   for find max number
using namespace std;

int findMinInArray(int arr[], int size)
{
    int minAns = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minAns)
        {
            minAns = arr[i];
        }
    }
    return minAns;
}

int main()
{

    int arr[] = {10, 8, 31, 4, 3, 2, 1, 51};
    int size = 8;
    int min = findMinInArray(arr, size);
    cout << min << " is the minimum element" << endl;

    return 0;
}
