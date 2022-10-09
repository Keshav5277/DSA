/* better then recursive call for the same function as in recurssion there will be extra call overheads
which would give a space complexity of O(log n) */

#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int x, int left, int right)
{
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main()
{
    // int arr[] = {10, 20, 30, 40, 50, 60};
    int arr[] = {10, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int res = binarySearch(arr, 0, 0, n - 1);
    cout << res;
    return 0;
}
