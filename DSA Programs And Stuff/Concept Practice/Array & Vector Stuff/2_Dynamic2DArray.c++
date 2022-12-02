#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    cout << "hello";
    cout << "Enter Size of your 2D Array: \n";
    cin >> r >> c;

    int **arr;
    arr = new int *[r];

    for (int i = 0; i < r; i++)
    {
        arr[i] = new int[c];
        for (int j = 0; j < c; j++)
        {
            arr[i][j] = j + 1;
        }
    }

    cout << "lets see if this array works\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}