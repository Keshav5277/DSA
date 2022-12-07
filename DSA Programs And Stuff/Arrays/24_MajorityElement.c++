#include <bits/stdc++.h>
using namespace std;

// // //      ***   Moore's Voting Algorithm  ***

int MajorityElement(vector<int> arr)
{
    int count = 1;
    int majorityIndex = 0;
    // note this only guarenties a candidate that might be a majority element
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] == arr[majorityIndex])
        {
            count++;
        }
        else
        {
            count--;
            if (count == 0)
            {
                majorityIndex = i;
                count = 1;
            }
        }
    }

    // to confirm that the element is majority
    count = 0;
    for (int i = 0; i < arr.size(); i++)
        if (arr[i] == arr[majorityIndex])
            count++;

    if (count <= arr.size() / 2)
        return -1;

    return majorityIndex;
}

int main()
{
    vector<int> arr;
    int value = 0, count = 0;
    while (true)
    {
        cout << "Enter arr element or '6969' for terminate [" << ++count << "] : ";
        cin >> value;
        if (value == 6969)
        {
            break;
        }
        arr.push_back(value);
    }
    cout << "Inputed array:\n";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << "The majority Element is at: " << MajorityElement(arr) <<" which is :"<<arr[MajorityElement(arr)]<<endl;

    return 0;
}