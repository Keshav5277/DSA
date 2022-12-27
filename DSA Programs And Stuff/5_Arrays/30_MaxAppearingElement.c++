#include <bits/stdc++.h>
using namespace std;

int MaxAppearing(vector<int> left, vector<int> right)
{
    int res;
    int flag[100] = {0};

    for(int i = 0; i < left.size(); i++)
    {
        flag[left[i]]++;
        flag[right[i] + 1]--;
    }
    cout<<"Flag elements\n";
    for(int i = 0; i < 100; i++)
    {
        cout<<flag[i]<<" ";
    }
    res = flag[0];
    for(int i = 1; i < 100; i++)
    {
        flag[i] += flag[i - 1];
        if(res < flag[i])
            res = i;
    }
    cout<<"Flag elements after change\n";
    for(int i = 0; i < 100; i++)
    {
        cout<<flag[i]<<" ";
    }
    return res;
}

int main()
{
    vector<int> left;
    int value = 0, count = 0;
    while (true)
    {
        cout << "Enter left element or '6969' for terminate [" << ++count << "] : ";
        cin >> value;
        if (value == 6969)
        {
            break;
        }
        left.push_back(value);
    }
    cout << "Inputed array:\n";
    for (int i = 0; i < left.size(); i++)
    {
        cout << left[i] << " ";
    }
    vector<int> right;
    value = 0, count = 0;
    while (true)
    {
        cout << "Enter right element or '6969' for terminate [" << ++count << "] : ";
        cin >> value;
        if (value == 6969)
        {
            break;
        }
        right.push_back(value);
    }
    cout << "Inputed array:\n";
    for (int i = 0; i < right.size(); i++)
    {
        cout << right[i] << " ";
    }
    cout<<"\nFinal Answer : "<<MaxAppearing(left, right);
    return 0;
}