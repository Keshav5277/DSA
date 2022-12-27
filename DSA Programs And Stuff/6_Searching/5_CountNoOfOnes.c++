#include <bits/stdc++.h>
using namespace std;

int CountOnes(int arr[], int l, int r)
{
    int mid = (l + r) / 2;
    while (r >= l)
    {
        if (arr[mid] == 1)
        {
            if (mid == 0 || arr[mid] != arr[mid - 1])
                return mid;
            else
                return CountOnes(arr, l, mid - 1);
        }
        else
            return CountOnes(arr, mid + 1, r);
    }
    return -1;
}

int main()
{
    int arr[] = {0, 0, 0, 0, 1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "No of ones : " << (n - CountOnes(arr, 0, n - 1));
    return 0;
}