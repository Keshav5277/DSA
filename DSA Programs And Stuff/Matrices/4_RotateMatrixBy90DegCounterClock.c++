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
    // finding transpose
    for (int i = 0; i < rows; i++)
        for (int j = i + 1; j < columns; j++)
            swap(arr[i][j], arr[j][i]);

cout << "Transposed:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    // now revering the columns

    for (int i = 0; i < columns; i++)
    {
        int low = 0;
        int high = rows - 1;
        while (low < high)
        {
            swap(arr[low++][i],arr[high--][i]);
        }
    }
    cout << "Columns Reversed:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    

    // // ******* Naive ******* but not bad actually quite thoughtfull
    // int arr2[rows][columns];
    // for (int i = 0; i < rows; i++)
    //     for (int j = 0; j < columns; j++)
    //         arr2[rows - j - 1][i] = arr[i][j];
    // cout<<"Rotated amtrix:\n";
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < columns; j++)
    //     {
    //         cout << arr2[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}