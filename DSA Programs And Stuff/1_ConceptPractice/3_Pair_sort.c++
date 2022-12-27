#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
    return (a.second > b.second);
}

int main()
{
    pair<int, int> num[] = {make_pair(2, 4), make_pair(3, 8), make_pair(1, 3)};
    // cout << "Enter no: \n";
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << "Num[" << i << "] :";
    //     cin >> num[i].first >> num[i].second;
    // }
    cout << "Inputer pairs:\n";
    for (int i = 0; i < 3; i++)
    {
        cout << num[i].first << "\t" << num[i].second;
        cout << endl;
    }

    cout << "after sorting:\n";
    sort(num, num + 3, compare);

    for (int i = 0; i < 3; i++)
    {
        cout << num[i].first << "\t" << num[i].second;
        cout << endl;
    }

    return 0;
}