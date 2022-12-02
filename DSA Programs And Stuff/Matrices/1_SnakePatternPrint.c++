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
        // vector<int> temp(column, i+1);
        vector<int> temp;
        for (int j = 0; j < column; j++)
        {
            int element;
            cout<<"Element ["<<j+1<<"]";
            cin>>element;
            temp.push_back(element);
        }
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

    cout<<"SnakePattern:\n";
    for (int i = 0; i < rows; i++)
    {
        if(i % 2 == 0)
            for(int j = 0; j < arr[i].size(); j++)
                cout << arr[i][j] << " ";

        else
            for(int j = arr[i].size() - 1; j >= 0; j--)
                cout << arr[i][j] << " ";
    }
    return 0;
}