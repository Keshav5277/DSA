#include <bits/stdc++.h>
using namespace std;
int main()
{

    int rows = 4, columns = 4;
    int arr[rows][columns] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 9, 9, 9}, {8, 6, 4, 3}};

    cout << "Inputed Matrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j=i +1; j < columns; j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
    cout << "Changed Matrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

// ***for only printing the transpose***
// cout << "Transpose:\n";
// // cout << "Inputed Matrix:\n";
// for (int i = 0; i < rows; i++)
// {
//     for (int j = 0; j < columns; j++)
//     {
//         cout << arr[j][i] << " ";
//     }
//     cout << endl;
// }
