#include <bits/stdc++.h>
using namespace std;
// binary conversion

void conversion(int N)
{
    if (N == 0)
        return;
    conversion(N / 2);
    cout << N % 2;
}

int main()
{
    conversion(69);
    return 0;
}