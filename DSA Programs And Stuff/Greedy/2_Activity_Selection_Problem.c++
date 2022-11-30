#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int, int> a, pair<int, int> b)
{
    return (a.second < b.second);
}

int maxJobs(pair <int, int> num [], int a)
{
    int res = 1;
    int prev = 0;
    
    for(int curr = 1; curr < a; curr++)
    {
        if(num[curr].first >= num[prev].second)
        {
         res++;
         prev = curr;
        }
        
    }
    return res;
}

int main()
{
    pair<int, int> num[] = {make_pair(3, 8), make_pair(2, 4), make_pair(1, 3), make_pair(10, 11)};

    cout << "Inputer pairs:\n";
    for (int i = 0; i < 4; i++)
    {
        cout << num[i].first << "\t" << num[i].second;
        cout << endl;
    }

    cout << "after sorting:\n";
    sort(num, num + 4, compare);

    for (int i = 0; i < 4; i++)
    {
        cout << num[i].first << "\t" << num[i].second;
        cout << endl;
    }
    cout<<"Final Result:\n";
    cout<<maxJobs(num,4);

    return 0;
}