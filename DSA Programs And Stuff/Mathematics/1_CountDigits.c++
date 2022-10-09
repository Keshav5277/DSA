#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, count = 0;
    cin >> x;
    while (x > 0)
    {
        count++;
        x = x / 10;
    }
    cout << "count = " << count;
    return 0;
}