#include <bits/stdc++.h>
using namespace std;
           /* The concept we used was whatever the boolean array, the difference between
           the no. of groups of 1's and the no og groups of 0's will always be [0 or 1] 
           so using that the Minimum no of groups will always be of that digit that
           appears on second group first
           
           eg : 0 0 1 1 0 0 1 1 0     here minimum will be given by the groups of 1
           */
void MinimumFlips(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != arr[i - 1])
        {
            if (arr[i] != arr[0])
            {
                cout << "Flip starting from : " << i << " to ";
            }
            else
            {
                cout << i - 1 << endl;
            }
        }
    }

    if (arr[arr.size() - 1] != arr[0])
    {
        cout << arr.size() - 1;
    }
}

int main()
{
    vector<int> arr;
    int value = 0, count = 1;
    while (value != 69)
    {
        cout << "Enter element [" << count++ << "] : ";
        cin >> value;
        if (value == 69)
            break;
        arr.push_back(value);
    }
    cout << "\n Inputed array : ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    MinimumFlips(arr);
    return 0;
}
