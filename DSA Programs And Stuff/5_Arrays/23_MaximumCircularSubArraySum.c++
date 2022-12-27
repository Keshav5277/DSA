#include <bits/stdc++.h>
using namespace std;

// // / //   NAIVE SOLUTION
// // // **** Inefficient Sollution and here we used Modulo Airthmatic

// // // // // int MaxCircularSum(vector<int> &arr)
// // // // // {
// // // // //     int result = arr[0];

// // // // //     for(int i = 0; i < arr.size(); i++)
// // // // //     {
// // // // //         int curr = arr[i];
// // // // //         for(int j = 1; j < arr.size(); j++)
// // // // //         {
// // // // //             int index = (i + j) % arr.size();
// // // // //             curr += arr[index];
// // // // //             result = max(curr,result);
// // // // //         }
// // // // //     }
// // // // //     return result;
// // // // // }

/* Future me if u are here to revise this shite be warned there is stuff for rattafication here
at first i was hackkabakka that he used modular airthmatic here but i guess thats should be normal
well because its me who don't know the modular airthmatic so i guess lets not bitch about the Naive
solution She's cool


BUT BUT BUT Now in this efficient solution what he did was utmost BS
well mostly because there is too much to remember here in  this solution just to find
the max sum in circular sub arry


like FIRST we use normal kadane for liner array and get FIRST ANSWER say(A)
SECOND he call normal kadane for linear but after finding the total sum then inverting the sign
of every element and then adding it to the total sum    say (B)


now we print the max between   A and B
BULLSHITE
  */

int NormalKadaneMax(vector<int> arr)
{
    int res = arr[0], maxEnding = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        maxEnding = max(arr[i], maxEnding + arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}

int MaxCircularSum(vector<int> &arr)
{
    int maxNormal = NormalKadaneMax(arr);
    if (maxNormal < 0)
        return maxNormal;

    int arrSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        arrSum += arr[i];
        arr[i] = -arr[i];
    }
    int maxCircular = arrSum + NormalKadaneMax(arr);
    return max(maxNormal, maxCircular);
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

    cout << " Maximum Sub Circular array sum: \n"
         << MaxCircularSum(arr) << endl;
    cout << "Inputed array:\n";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}