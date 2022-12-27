#include <bits/stdc++.h>
using namespace std;

void printingNo(int N)
{
    if (N == 0)
        return;

    cout << N << " ";
    printingNo(N - 1);
    cout << endl
         << N << " ";
}

void printWeird(int N)
{
    if (N == 0)
        return;
    printWeird(N - 1);
    cout << N << " ";
    printWeird(N - 1);
}
int main()
{
    printingNo(10);
    cout << endl
         << endl
         << endl
         << "Example : 2:"
         << endl
         << endl
         << endl;
    printWeird(3);
    return 0;
}