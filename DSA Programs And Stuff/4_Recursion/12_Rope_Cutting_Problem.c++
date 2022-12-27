#include <bits/stdc++.h>
using namespace std;

int RopeC(int n, int a, int b, int c)
{
    if (n == 0)
        return 0;
    if (n < -1)
        return -1;

    int res = max(RopeC(n - a, a, b, c), max(RopeC(n - b, a, b, c), RopeC(n - c, a, b, c)));

    if (res == -1)
        return -1;
    return res + 1;
}

int main()
{
    // cout << RopeC(23, 11, 9, 12);
    cout << RopeC(30, 10, 9, 16);
    return 0;
}