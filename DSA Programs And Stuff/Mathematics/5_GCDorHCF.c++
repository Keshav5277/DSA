// #########Euclidean Algorithm###########
//            Efficient solution it automatically get the bigger input at the 1st position
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        gcd(b, a % b);
}
int main()
{
    int a, b;
    cout << "enter two numbers:";
    cin >> a >> b;
    int res = gcd(a, b);
    cout << "GCD of two no. is: "<<res;
    return 0;
}