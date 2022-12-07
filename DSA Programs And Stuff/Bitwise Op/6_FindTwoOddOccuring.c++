#include <bits/stdc++.h>
using namespace std;

void TwoOdd(vector<int> arr)
{
    int num = arr[0], res1 = 0, res2 = 0;
    for (int i = 1; i < arr.size(); i++)
        num = num ^ arr[i];
    int k = num & ~(num - 1);
    for (int i = 0; i < arr.size(); i++)
    {
        if ((k & arr[i]) != 0)
            res1 = res1 ^ arr[i];
        else
            res2 = res2 ^ arr[i];
    }
    cout << "The two odd appearing numbers : " << res1 << " , " << res2 << endl;
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
    TwoOdd(arr);

    return 0;
}