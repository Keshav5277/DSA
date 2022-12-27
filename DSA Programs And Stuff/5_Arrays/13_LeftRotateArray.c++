#include <bits/stdc++.h>
using namespace std;

    void LeftShift(vector<int> &arr)
    {
        int temp = arr[0];
        for(int i = 1; i < arr.size(); i++)
        {
            arr[i - 1] = arr[i];
        }
        arr[arr.size() - 1] = temp;
    }

int main()
{
    vector<int> arr;
    int value = 99, count = 0;
    while (true)
    {
        cout << "Enter arr element or '6969' for terminate [" << ++count << "] :";
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

    LeftShift(arr);

    cout << "After Left Shift array:\n";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
return 0;
}