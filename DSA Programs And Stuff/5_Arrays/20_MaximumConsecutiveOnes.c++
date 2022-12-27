#include <bits/stdc++.h>
using namespace std;
  
    // // // // 100% made by me ==== Efficient solution
   
int CountingConsOnes(vector<bool> arr)
{
    int result = 0;
    int maxStreak = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            if (result > maxStreak)
            {
                maxStreak = result;
            }
            result = 0;
        }
        else
        {
            result++;
        }
    }
    if(result > maxStreak)
    {
        maxStreak = result;
    }
    return maxStreak;
}

int main()
{
    vector<bool> arr;
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

    cout << "Max Consecutive ones: " << CountingConsOnes(arr) << endl;

    return 0;
}