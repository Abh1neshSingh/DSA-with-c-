#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    char ch[123];
    bool flags[23];
    long num[900];
    short snum[1000];

    cout << " Array created succesfully" << endl;

    int a = 5;
    cout << "Address of a :" << &a << endl;
    cout << " Size of a : " << sizeof(a) << endl;

    int arrr[10];
    cout << " Base address of arrr is :" << &arrr << endl; // &arrr-------> address of arrr
    cout << " Base address of arrr is :" << &arrr << endl;
    cout << " size of arrr is : " << sizeof(arrr) << endl;

    return 0;
}
