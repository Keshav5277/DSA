#include <bits/stdc++.h>
using namespace std;

void maxDiff(int arr[], int n)
{
    int res = arr[1] - arr[0];
    int min = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if ((arr[i] - arr[i - 1]) > res)
            res = arr[i] - arr[min];
        if (arr[min] > arr[i])
            min = i;
    }
    cout << res;
    cout << arr[min];
}
int main()
{
    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    maxDiff(arr, n);
    return 0;
}