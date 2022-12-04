#include <bits/stdc++.h>
using namespace std;

void RemoveDupli(vector<int> &arr)
{
    int flag = 1;
    for (int i = 1; i < arr.size(); i++)
    {
        if(arr[i] != arr[flag - 1])
        {
            arr[flag] = arr[i];
            flag++;
        }
    }
    arr.resize(flag);
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
    cout << "Inputed array:\n";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    RemoveDupli(arr);

    cout << "\n After Removing Dupli:\n";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}