#include <bits/stdc++.h>
using namespace std;
int BinS_LastOccurence(int arr[], int x, int left, int right)
{
    if (right < left)
        return -1;
    int mid = right + left / 2;
    if (arr[mid] < x)
        return BinS_LastOccurence(arr, x, mid + 1, right);
    else if (arr[mid] > x)
        return BinS_LastOccurence(arr, x, left, mid - 1);
    else
    {
        if (arr[mid] == x)
        {
            if (arr[mid + 1] == x)
                return BinS_LastOccurence(arr, x, mid + 1, right);
            else
                return mid;
        }
    }
}

int main()
{
    // int arr[] = {10, 20, 30, 40, 50, 60};
    int arr[] = {10, 10, 10, 10, 20, 20, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int res = BinS_LastOccurence(arr, 10, 0, n - 1);
    cout << res;
    return 0;
}