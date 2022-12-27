#include <bits/stdc++.h>
using namespace std;

void subsetGen(string S, string curr, int i)
{

    if(S.length() == i)
        {
            cout<<curr<<" ";
            return;
        }

    subsetGen(S, curr, i + 1);
    subsetGen(S, curr + S[i], i + 1);
}

int main()
{
    subsetGen("ABCDEFG"," ",0);
    return 0;
}