#include <bits/stdc++.h>
using namespace std;
// Naive we know

// Efficient we work on the same bs that the divisors apper in pairs
void PrintDivisors(int n)
{
    int i;
    for (i = 1; i * i < n; i++)
        if (n % i == 0)
            cout << i << " ";
    for (; i >= 1; i--)
        if (n % i == 0)
            cout << (n / i) << " ";
}
int main()
{
    cout << "Enter your no : ";
    int num;
    cin >> num;
    PrintDivisors(num);
    return 0;
}