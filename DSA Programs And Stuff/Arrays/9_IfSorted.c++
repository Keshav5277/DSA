#include <bits/stdc++.h>
using namespace std;

bool IfSorted(vector<int> arr)
{
    for(int i = 1; i < arr.size(); i++)
    {
        if(arr[i] < arr[i - 1])
        {
            return false;
        }
    }
        return true;
}
int main()

{
    vector<int> arr;
    int value = 99, count = 0;
    while (true)
    {
        cout << "Enter arr element or '0' for terminate [" << ++count << "] :";
        cin >> value;
        if (value == 0)
        {
            break;
        }
        arr.push_back(value);
    }
    // cout<<"Inputed array:\n";
    // for(int i = 0; i < arr.size(); i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout << IfSorted(arr);
    bool flag = IfSorted(arr);
    if(flag == true) cout<<"Sorted";
    else  cout<<" not Sorted";

    return 0;
}