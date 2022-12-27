#include <bits/stdc++.h>
using namespace std;

    void ReverseArray(vector<int> &arr)
    {
        int low = 0;
        int high = arr.size() - 1;
         while(low < high)
         {
            swap(arr[low], arr[high]);
            low++;
            high--;
         }
    }

int main()
{
    vector<int> arr;
    int value = 99, count = 0;
    while (true)
    {
        cout << "Enter arr element or '0' for terminate [" << ++count << "] :";
        cin >> value;
        if (value == 0)
        {
            break;
        }
        arr.push_back(value);
    }
        cout<<"Inputed array:\n";
    for(int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }

    ReverseArray(arr);

        cout<<"Reversed array:\n";
    for(int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}