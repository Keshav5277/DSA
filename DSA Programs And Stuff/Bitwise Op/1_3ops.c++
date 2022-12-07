#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "konichiva\n";
    int a = 5, b = 3;
    int c = a & b;
    cout << "And : " << c << endl;

    cout << "Or : " << (a | b) << endl;

    cout << "Xor : " << (a ^ b) << endl;
    cout << "Xor operation : " << (a ^ b ^ a ^ a ^ b) << endl;

    cout << "LeftShift : " << (a << 1) << endl; //     a << b   =   a * 2^b

    cout << "RightShift : " << (a >> 1) << endl; //    a >> b   =   a / 2^b

    cout << "Not : " << (~a) << endl;
    
    return 0;
}