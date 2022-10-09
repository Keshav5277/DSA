// ################Euclidean Algorithm################
// a*b = gcd(a,b) * lcm(a*b)
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
    int G = gcd(a, b);
    int res = (a * b) / G;
    cout << "LCM of give no is: " << res;
    return 0;
}