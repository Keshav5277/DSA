#include <bits/stdc++.h>
using namespace std;

// // // // // // Naive solution  O(N^2) Time Complexity
// // // // // //                 O(1) Space Complexity

// // // // // int RainWater(vector<int> &arr)
// // // // // {
// // // // //     int result = 0;
// // // // //     for (int i = 1; i < arr.size() - 1; i++)
// // // // //     {
// // // // //         int lmax = arr[0];
// // // // //         for (int j = i; j > 0; j--)
// // // // //         {
// // // // //             lmax = max(arr[j], lmax);
// // // // //         }
// // // // //         int rmax = arr[arr.size() - 1];
// // // // //         for (int j = i; j < arr.size() - 1; j++)
// // // // //         {
// // // // //             rmax = max(arr[j], rmax);
// // // // //         }
// // // // //         result += min(lmax, rmax) - arr[i];
// // // // //     }

// // // // //     return result;
// // // // // }


      // // // // // // // Efficient sollution === Arre salle ne Phele vale ke loops individually likh diye aur unke results ko array me store kar liya
      // // // // // // // so Time Complexity  === O(N)
      // // // // // // // But Space Complexity  === O(N)

int RainWater(vector<int> &arr)
{
    int result = 0;
    int lmax[arr.size()];
    int rmax[arr.size()];
    // for filling leftmax array
    lmax[0] = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        lmax[i] = max(arr[i], lmax[i - 1]);
    }

    // for finding all right maxes
    rmax[arr.size() - 1] = arr[arr.size() - 1];
    for(int i = arr.size() - 2; i >= 0; i--)
    {
        rmax[i] = max(arr[i], rmax[i + 1]);
    }

    for(int i = 1; i < arr.size() - 1; i++)
    {
        result += min(lmax[i],rmax[i]) - arr[i];
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

    cout << "\nAmount of water:" << RainWater(arr) << endl;

    return 0;
}