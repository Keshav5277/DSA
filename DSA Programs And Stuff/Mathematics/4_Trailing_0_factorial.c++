// logic is this that we count no. of 2,5 pairs, moreover we only count no of 5's cause they will for sure be less than 2's
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int res = 0;
    for (int i = 5; i <= num; i = i * 5)
    {
        res = res + num / i;
    }
    cout << "Trailing zeros: " << res;
    return 0;
}