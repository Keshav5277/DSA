#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "hello i am really scared for my future uwu\n";
    cout << "today at 02-12-2022 \n";
    cout << "I am gonna try to only do programming whole day and see if i will find it fun\n";
    cout << "Enter 2 D array dimensions:\n";
    int r, c;
    cin >> r >> c;
    int arr[r][c];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
        {
            cout << "Enter element[" << i << "][" << j << "] : ";
            cin >> arr[i][j];
        }
    cout << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            // cout << "Element[" << i << "][" << j << "] : ";
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}