#include <bits/stdc++.h>
using namespace std;

void printS(int N)
{
    if(N == 0)
        return;
    cout<<N<<" ";
    printS(N - 1);
}

int main()
{
    printS(10);
return 0;
}