#include <bits/stdc++.h>
using namespace std;

void SubArraySum(vector<int> arr, int givenSum)
{
    int curr = 0, s = 0, end = 0;
    for (end; end < arr.size();)
    {
        if (curr > givenSum)
        {
            curr = curr - arr[s];
            s++;
        }
        else if(curr == givenSum)
        {
            cout<<"Given sum present at " <<s<<" to "<<end - 1<<endl;
            return;
        }
        else
        {
            curr = curr + arr[end];
            end++;
        }
    }
    cout<<"given sum not present \n";
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

    SubArraySum(arr, 33);

    return 0;
}