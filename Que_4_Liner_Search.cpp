//  <-------------  Problem statement --------------->
// Liner Search in array
// given an array and search target in array
// as like ---> arr[5]={2,4,6,8,10}  and  target=10
// if we find target then print found or not found

#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {2, 4, 6, 8, 10};
    int target = 10;
    int n;
    bool flag = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            flag = 1;
            cout << " Target found";
            break;
        }

        if (flag == 1)
        {
            cout << " Traget found";
        }
        else
        {
            cout << "Traget not found";
        }
    }

    return 0;
}
