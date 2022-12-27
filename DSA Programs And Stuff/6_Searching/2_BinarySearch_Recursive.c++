#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int x, int right, int left)
{
    if (right > left)
        return -1;
    int mid = (right + left) / 2;
    if (arr[mid] == x)
        return mid;
    else if (arr[mid] < x)
        return binarySearch(arr, x, mid + 1, left);
    else 
        return binarySearch(arr, x, right, mid - 1);
}

int main()
{
    // int arr[] = {10, 20, 30, 40, 50, 60};
    // int arr[] = {10, 10};
    int arr[] = {10, 10, 10, 10, 20, 20, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int res = binarySearch(arr, 10, 0, n - 1);
    cout << res;
    return 0;
}