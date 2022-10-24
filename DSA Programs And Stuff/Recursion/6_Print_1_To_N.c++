#include <bits/stdc++.h>
using namespace std;

void printS(int N)
{
    if(N == 0)
        return;
    printS(N - 1);
    cout<<N<<" ";
}

int main()
{
    printS(10);
return 0;
}