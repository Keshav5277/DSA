#include <bits/stdc++.h>
using namespace std;

void printLeaders(int arr[], int n)
{
    int curr_lead = n - 1;
    cout << arr[curr_lead]<<"\t";

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > arr[curr_lead])
        {
            cout << arr[i] << "\t";
            curr_lead = i;
        }
    }
}

int main()
{
    int arr[] = {3, 20, 45, 83, 45, 93, 47, 34};
    int n = sizeof(arr) / sizeof(arr[0]);
    printLeaders(arr, n);
    return 0;
}