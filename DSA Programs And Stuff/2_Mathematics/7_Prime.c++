#include <bits/stdc++.h>
using namespace std;
//    NAIVE Solution   : u already know O(n)
//     1st Efficient   : using i * i < n       O(n^(1/2))       based on that the divisor of  a numer appears in pairs
//     2nd Efficient   : mind boogling  but give   O(he did not say) but it indicates 3 times faster the 1st efficient 
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