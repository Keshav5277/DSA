#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout << "Enter the no: \n";
    cin >> num;
    int temp = num;
    int x, rev = 0;
    while (temp > 0)
    {
        x = temp % 10;
        rev = rev * 10 + x;
        temp = temp / 10;
    }
    if (rev == num)
    {
        cout << "palindrome";
    }
    else
        cout << "Not Palindrome";
    return 0;
}