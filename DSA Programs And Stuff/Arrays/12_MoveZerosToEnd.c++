#include <bits/stdc++.h>
using namespace std;
void MoveZerosToEnd(vector<int> &arr)
{
    int flag = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i],arr[flag]);
            flag++;
        }
    }
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

    MoveZerosToEnd(arr);

    cout << "\nChanged array:\n";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}