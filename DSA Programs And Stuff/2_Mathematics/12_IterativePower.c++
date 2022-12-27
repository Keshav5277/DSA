#include <bits/stdc++.h>
using namespace std;

//             similar to computing power but with constant auxilary space

int MyPower(int n, int p)
{
    int result = 1;
    int curr = 1;
    while(p > 0)
    {
        if(curr == 1)
            curr = n;
        else    
            curr = curr * curr;

        if((p & 1) != 0)
            result = result * curr;    

        p = (p >> 1);            
    }
    return result;
}

int main()
{
    cout << "Nmber : ";
    int num;
    cin >> num;
    cout << "Raised to : ";
    int po;
    cin >> po;
    cout << " Is : ";
    int res = MyPower(num, po);
    cout << res;
    return 0;
    return 0;
}