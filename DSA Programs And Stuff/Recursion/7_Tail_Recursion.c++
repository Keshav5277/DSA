// Theory but also the conversion of a non tail recursive fun to tail recursive
// printing 1 to N using recursion

#include <bits/stdc++.h>
using namespace std;
// note for 1 to N     k = 1 always(like its obvious)
void print1ToN(int N, int k)
{
    if (N == 0)
        return;
    cout << k << " ";
    print1ToN(N - 1, k + 1);
}

int main()
{
    print1ToN(10, 1);
    return 0;
}