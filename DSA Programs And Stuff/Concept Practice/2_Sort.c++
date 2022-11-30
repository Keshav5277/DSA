#include <bits/stdc++.h>
using namespace std;

// bool compare(int a, int b)
// {
//     return a > b;               Practically speaking this compare function is same as the greater fun in STL
// }

int main()
{
    int arr[] = {4, 6, 1, 89, 23, 45, 34, 76};
    int size = sizeof(arr) / sizeof(arr[0]);

    // sort(arr, arr + size);

    // sort(arr, arr + size, compare);

    sort(arr, arr + size, greater<int>());    // less is opposite fun of greater
    for (int i = 0; i < size; i++)
        cout << arr[i] << "\t";
    return 0;
}