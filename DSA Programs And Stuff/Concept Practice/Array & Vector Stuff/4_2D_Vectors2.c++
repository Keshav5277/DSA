#include <bits/stdc++.h>
using namespace std;
int main()
{

    cout << "Ohiyo\n";
    cout << "Enter your array size\n";
    int r, c;
    cin >> r >> c;

    vector<vector<int>> arr;

    for (int i = 0; i < r; i++)
    {
        vector<int> temp;
        for (int j = 0; j < c; j++)
        {
            temp.push_back(j + 5);
        }
        arr.push_back(temp);
    }
    cout << "Lets see if this array works: \n";
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