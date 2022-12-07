#include <bits/stdc++.h>
using namespace std;

// // // // // // // // ### NAIVE APPROACH ###
// // // // // // int MaxWindowSum(vector<int> arr, int k)
// // // // // // {
// // // // // //     int result = INT_MIN;
// // // // // //     for(int i = 0; i + k - 1 < arr.size(); i++)
// // // // // //     {
// // // // // //         int curr = 0;
// // // // // //         for(int j = 0;j < k ;j++)
// // // // // //         {
// // // // // //             curr += arr[i + j];
// // // // // //         }
// // // // // //         result = max(curr, result);
// // // // // //     }
// // // // // //     return result;
// // // // // // }

/* In the efficent was we use the solution from previous window calculation
and get our next result by subtracting first element of the previous window and adding 
the last element of the next window */

int MaxWindowSum(vector<int> arr, int k)
{
    int curr = 0;

    for(int i = 0; i < k; i ++)
    {
        curr += arr[i];
    }
    int result = curr;
    for(int i = k; i < arr.size(); i++)
    {
        curr = curr + arr[i] - arr[i - k];
        result = max(result, curr);
    }

    return result;
}
int main()
{
    vector<int> arr;
    int value = 0, count = 1;
    while (value != 69)
    {
        cout << "Enter element [" << count++ << "] : ";
        cin >> value;
        if (value == 6969)
            break;
        arr.push_back(value);
    }
    cout << "\n Inputed array : ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Max of give window sum : " << MaxWindowSum(arr, 4);

    return 0;
}
