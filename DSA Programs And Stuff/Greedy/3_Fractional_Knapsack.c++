#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
    double r1 = (double)a.first / a.second;
    double r2 = (double)b.first / b.second;

    return (r1 > r2);
}
double fractionalKnapsack(pair<int, int> Obj[], int a, int W)
{
    double res = 0.0;
    sort(Obj, Obj + a, compare);
    for (int i = 0; i < a; i++)
    {
        if (Obj[i].second <= W)
        {
            W = W - Obj[i].second;
            res = res + Obj[i].first;
        }
        else
        {
            res = res + ( Obj[i].first * ( (double) W / Obj[i].second ) );
            break;
        }
    }
    return res;
}

int main()
{
    pair<int, int> Obj[] = {make_pair(120, 30), make_pair(100, 20), make_pair(60, 10)};
    // pair<int, int> Obj[] = {make_pair(600, 50), make_pair(500, 20), make_pair(400, 30)};
    cout << "Result : " << fractionalKnapsack(Obj, 3, 50);
    // cout << "Result : " << fractionalKnapsack(Obj, 3, 70);
    return 0;
}