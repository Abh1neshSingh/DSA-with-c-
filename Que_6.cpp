//  <-------------  Problem statement --------------->
// Cout 0's and 1's in a Given Array

#include <iostream>
using namespace std;

void coutZeroOne(int arr[], int size)
{
    int zeroCount = 0;
    int oneCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        if (arr[i] == 1)
        {
            oneCount++;
        }
    }
    cout << "Zero Count is :" << zeroCount << endl;
    cout << "one count is: " << oneCount << endl;
}

int main()
{
    int arr[] = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0};
    int size = 15;

    coutZeroOne(arr, size);

    return 0;
}
