#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rows = 4, columns = 5;
    int arr[rows][columns] = {{1, 2, 7, 3, 4}, {5, 6, 3, 7, 8}, {9, 9, 9, 9, 9}, {8, 6, 1, 4, 3}};

    int top = 0;
    int right = columns - 1;
    int bottom = rows - 1;
    int left = 0;

    cout << "Inputed Matrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Printing Spiral pattern:\n";
    while (top <= bottom && left <= right)
    {
        // for top print
        for (int i = left; i <= right; i++)
        {
            cout << arr[top][i] << " ";
        }
        top++;

        // for right print
        for (int i = top; i <= bottom; i++)
        {
            cout << arr[i][right] << " ";
        }
        right--;

        // for bottom print
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                cout << arr[bottom][i] << " ";
            }
            bottom--;
        }

        // for left print
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }

    return 0;
}