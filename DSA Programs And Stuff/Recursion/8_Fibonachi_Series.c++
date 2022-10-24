//  Lectre was of to write proper test cases
#include <bits/stdc++.h>
using namespace std;

int fibbo(int N)
{
    if (N == 0)
        return 0;
    if (N == 1)
        return 1;
    return fibbo(N - 1) + fibbo(N - 2);
}

int main()
{
    cout<<fibbo(10);
    return 0;
}