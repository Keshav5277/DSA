#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Arigato\n";
    vector<vector<int>> arr;
    cout << "Enter rows and columns: \n";
    int rows;
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        cout << "Enter no of elements in [" << i + 1 << "] row:\n";
        int column;
        cin >> column;
        vector<int> temp(column, i+1);
        // for (int j = 0; j < column; j++)
        // {
        //     temp.push_back(j+i+1);
        // }
        arr.push_back(temp);
    }

    cout << "Lets see if this worked: \n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}