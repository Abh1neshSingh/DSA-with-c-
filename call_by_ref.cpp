#include <iostream>
using namespace std;

void incrementBY1(int &k)
{
    k = k + 1;
}

int main()
{
    int n;

    cin >> n;
    incrementBY1(n);
    cout << "n:--" << n << endl;

    return 0;
}
