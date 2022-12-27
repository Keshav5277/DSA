#include <bits/stdc++.h>
using namespace std;

void PrintPrint(int arr[], vector<int> vec)
{
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int x : vec)
    {
        cout << x << " ";
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    vector<int> vec(5, 77);
    PrintPrint(arr, vec);
    arr[2] = 99;
    vec[2] = 99;
    cout<<"\nAfter changing: \n";
    PrintPrint(arr, vec);
    return 0;
}