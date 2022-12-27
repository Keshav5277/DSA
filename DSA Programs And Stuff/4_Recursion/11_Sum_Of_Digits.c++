#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int N)
{
    if (N <= 9)
        return N;
    return (N % 10) + sumOfDigits(N / 10);
}

int main()
{
    cout << sumOfDigits(8888);
    return 0;
}