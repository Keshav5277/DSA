#include <bits/stdc++.h>
using namespace std;

int secLargest(int arr[], int n)
{
    int res = -1, lrg = 0;
    for (int i = 0 ; i < n; i++)
    {
        if (arr[i] > arr[lrg])
        {
            res = lrg;
            lrg = i;
        }
    }
    return res;
}

int main()
{
    int arr[] = {2, 54, 7, 65, 123, 98, 40};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = secLargest(arr, n);
    cout << arr[result];
    return 0;
}