
#include <bits/stdc++.h>
using namespace std;

int FirstOccur(int arr[], int l, int r, int key)
{
    if (r < l)
        return -1;
    int mid = (l + r) / 2;
    if (arr[mid] < key)
        return FirstOccur(arr, mid + 1, r, key);
    else if (arr[mid] > key)
        return FirstOccur(arr, l, mid - 1, key);
    else if (arr[mid] == key)
    {
        if (arr[mid] != arr[mid - 1])
            return mid;
        else
            return FirstOccur(arr, l, mid - 1, key);
    }
}

int LastOccur(int arr[], int l, int r, int key)
{
    if (r < l)
        return -1;
    int mid = (l + r) / 2;
    if (arr[mid] < key)
        return LastOccur(arr, mid + 1, r, key);
    else if (arr[mid] > key)
        return LastOccur(arr, l, mid - 1, key);
    else if (arr[mid] == key)
    {
        if (arr[mid] != arr[mid + 1])
            return mid;
        else
            return LastOccur(arr, mid + 1, r, key);
    }
}

int CountOccurrence(int arr[], int n, int key)
{
    return LastOccur(arr, 0, n - 1, key) - FirstOccur(arr, 0, n - 1, key) + 1;
}

int main()
{
    int arr[] = {10, 10, 10, 10, 10, 10, 20, 20, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "\nElement Occured : " << CountOccurrence(arr, n, 10);
    return 0;
}