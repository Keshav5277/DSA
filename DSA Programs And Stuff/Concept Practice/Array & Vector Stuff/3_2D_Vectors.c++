#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Konichiva\n";
    cout << "Enter your array size\n";
    int r, c;
    cin >> r >> c;

    vector <int> arr[r];

    for(int i = 0; i < r; i++)
    {
        for(int  j = 0; j < c; j++)
        {
            arr[i].push_back(j + 5);
        }
    }
    cout<<"Lets see if this array works: \n";
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}