#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rows = 4, columns = 4;
    int arr[rows][columns] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 9, 9, 9}, {8, 6, 4, 3}};
    // int rows = 4, columns = 1;
    // int arr[rows][columns] = {{1}, {5}, {9}, {8}};

    cout << "Inputed Matrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "boundry Pattern:\n";
    for (int i = 0; i < rows; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < columns; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else if (i == columns - 1)
        {
            for (int j = columns - 1; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            cout << arr[i][columns - 1] << " ";
        }
    }
    for (int i = rows - 2; i > 0; i--)
    {
        cout << arr[i][0] << " ";
    }
    return 0;
}