#include <bits/stdc++.h>
using namespace std;

    int Getsome(vector<int> arr, int left, int right)
    {
        vector<int> temp = arr;
         // calculating prefix sum
         temp[0];
        for(int i = 1; i < temp.size(); i++)
        {
            temp[i] = temp[i - 1] + temp[i];
        }

        if(left == 0)
            return temp[right];

        return temp[right] - temp[left - 1];
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

    cout << "Sum of desired elements : " << Getsome(arr, 0, 2) << endl;
    cout << "Sum of desired elements : " << Getsome(arr, 1, 3) << endl;
    cout << "Sum of desired elements : " << Getsome(arr, 2, 6) << endl;

    return 0;
}