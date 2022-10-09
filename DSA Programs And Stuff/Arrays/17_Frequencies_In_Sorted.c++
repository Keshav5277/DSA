#include <bits/stdc++.h>
using namespace std;

void printFrequencies(int arr[], int n)
{
    int i = 1, freq = 1;
    while (i < n)
    {
        while (arr[i] == arr[i - 1])
        {
            freq++;
            i++;
        }
        cout << arr[i - 1] << "\t" << freq << " Times \n";
        i++;
        freq = 1;
    }
    if (n == 1 || arr[n - 1] != arr[n - 2])
        cout << arr[i - 1] << "\t" << 1 << " Times \n";
}

int main()
{
    int arr[] = {20, 20, 20, 20, 40, 50, 50, 50, 60};
    // int arr[] = {20};
    int n = sizeof(arr) / sizeof(arr[0]);
    printFrequencies(arr, n);
    return 0;
}