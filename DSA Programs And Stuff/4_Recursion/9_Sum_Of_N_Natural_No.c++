#include <bits/stdc++.h>
using namespace std;

int sumOfNatural (int N)
{
    if(N == 0)
        return 0;
    return N + sumOfNatural(N - 1);
}

int main()
{
cout<<sumOfNatural(5);
return 0;
}