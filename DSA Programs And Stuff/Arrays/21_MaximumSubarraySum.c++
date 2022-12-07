#include <bits/stdc++.h>
using namespace std;

int MaxSubSum(vector<int> arr)
{
    int result = arr[0];
    int maxleft = arr[0];

    for (int i = 0; i < arr.size(); i++)
    {
        maxleft = max((maxleft + arr[i]), arr[i]);
        result = max(result, maxleft);
    }

    return result;
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

    cout << "The max sub array sum is: " << MaxSubSum(arr) << endl;

    return 0;
}