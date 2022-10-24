#include <bits/stdc++.h>
using namespace std;
// function returns sum of 1's
// N is the no of 1's
int sumOfOne(int N)
{
    if (N == 0)
        return 0;
    else
        return 1 + sumOfOne(N - 1);
}
int main()
{
    // return sumOfOne(10);
    int res = sumOfOne(100);
    cout << res;
}