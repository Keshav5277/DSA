#include <bits/stdc++.h>
using namespace std;
//              NAIVE solution     O (n)

//              Efficient solution     O (log n)
int MyPower(int num, int po)
{
    if(po == 0)
        return 1;

    int temp = MyPower(num, po / 2);

    if(po % 2 == 0)
        return temp * temp;              // i thought of doing this shite without temp
    else                                 //   but after observing its saving us calls
        return temp * temp * num;    
}
int main()
{
    cout << "Nmber : ";
    int num;
    cin >> num;
    cout<<"Raised to : ";
    int po;
    cin>>po;
    cout<<" Is : ";
    int res = MyPower(num, po);
    cout<<res;
    return 0;
}