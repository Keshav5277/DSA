#include <bits/stdc++.h>
using namespace std;

//                    NAIVE solution
// // // // // // void CountSet(int n)
// // // // // // {
// // // // // //     int count = 0;
// // // // // //     for (int i = 0; i <= 64; i++)
// // // // // //     {
// // // // // //         if ((n & 1) != 0)          // or we could have sone if(n % 2 != 0)
// // // // // //             count++;
// // // // // //
// // // // // //         n = (n >> 1);              // or we could have done    n = (n / 2)
// // // // // //     }
// // // // // //     cout<<"no of set bits in "<<n<<" is : "<<count<<endl;
// // // // // // }

/*                      EFFICIENT solution
                       *****Brian Kerningram's Algorithm*****
                       eg : is n = 40  which in binary is 101000  so ans will be 2 set bits
                       what we aim to achive is that at every iteration we reset the set bit
                       and count the itreations

                       and how do we do that??
                       well we observe a shit thing
                       that 40 = 101000
                           and 39 which is (n - 1)   39 = 100111
                           Voila the thing is we see that    ^^^
                           the the binary of n - 1 will give us a no that
                           will have ALL THE BITS ON THE RIGHT SIDE OF THE 1ST SET BIT OF n ..... 1
                           so here we can directly in O(1) reset the 1ST set bit of the give n and iterate*/

void CountSet(int n)
{
    int count;
    for (count = 0; n > 0; count++)
    {
        n = (n & (n - 1));
    }
    cout<<"no of set bits : "<<count<<endl;
}

int main()
{
    CountSet(13);
    CountSet(5);
    return 0;
}