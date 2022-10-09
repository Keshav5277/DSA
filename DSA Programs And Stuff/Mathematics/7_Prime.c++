#include <bits/stdc++.h>
using namespace std;
bool prime(int num)
{
    if (num == 1)
        return false;
    if (num == 2 || num == 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;
    for (int i = 5; i * i < num; i = i + 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}
int main()
{
    int num;
    cout << "Enter the no: ";
    cin >> num;
    int result = prime(num);
    if (result)
        cout << "Prime";
    else
        cout << "Not Prime";
    return 0;
}