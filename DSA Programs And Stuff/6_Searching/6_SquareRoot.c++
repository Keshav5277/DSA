#include <bits/stdc++.h>
using namespace std;

int SQRoot(int n)
{
    int l = 1, r = n;
    int result;
    while (r >= l)
    {
        int mid = (l + r) / 2;
        if (mid * mid == n)
            return mid;
        else if (mid * mid > n)
            r = mid - 1;
        else
        {
            result = mid;
            l = mid + 1;
        }
    }
}

int main()
{
    int num = 0;
    while (num != 6969)
    {
        cout << "\nEnter a number or (6969) to stop : ";
        cin >> num;
        cout << "\nSquare root is : " << SQRoot(num);
    }
    return 0;
}