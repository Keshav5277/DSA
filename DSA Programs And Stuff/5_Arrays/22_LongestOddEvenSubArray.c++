#include <bits/stdc++.h>
using namespace std;

// // // // // // // // // // // // // BAsed on Kadane's Algo

int LongestOddEven(vector<int> arr)
{
    int result = 1;
    int curr = 1;

    for (int i = 1; i < arr.size(); i++)
    {
        if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) ||( arr[i] % 2 != 0 && arr[i - 1] % 2 == 0))
            {
                curr++;
                result = max(result, curr);
            }
        else
        {
            curr = 1;
        }
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

    cout << "\nThe Longest sequence will be: \n"
         << LongestOddEven(arr) << endl;

    return 0;
}