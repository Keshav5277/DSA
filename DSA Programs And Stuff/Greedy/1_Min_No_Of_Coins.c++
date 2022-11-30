#include <bits/stdc++.h>
using namespace std;

int minCoins(int coins[], int N, int amount)
{
    int res = 0;
    for (int i = 0; i < N; i++)
    {
        if (coins[i] <= amount)
        {
            int noC = floor(amount / coins[i]);
            res = res + noC;
            amount = amount - (noC * coins[i]);
            cout << noC << endl;
        }

        if (amount == 0)
            break;
    }
    return res;
}

int main()
{
    int coins[] = {10, 5, 2, 1}; // this coins array sould be sorted so for this algo to work
    cout << minCoins(coins, 4, 57);
    return 0;
}