#include <bits/stdc++.h>
using namespace std;

void LeftRotate(vector<int> &arr, int d)
{
    if (arr.size() < d)
        d = d - arr.size();

        reverse(arr.begin(), arr.begin() + d - 1 );
        reverse(arr.begin() + d,arr.end() );
        reverse(arr.begin(), arr.end() );
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

    LeftRotate(arr, 3);

    cout << "After Rotating:\n";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}