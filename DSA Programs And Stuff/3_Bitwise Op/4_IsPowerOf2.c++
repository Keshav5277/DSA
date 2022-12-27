#include <bits/stdc++.h>
using namespace std;
//               NAIVE solution
// // // // // // //bool PowerOfTwo(int n)
// // // // // // //{
// // // // // // //    if(n == 0)
// // // // // // //        return false;
// // // // // // //    while(n > 1)
// // // // // // //    {
// // // // // // //        if(n % 2 == 0)
// // // // // // //            n = n/2;
// // // // // // //        else
// // // // // // //            return false;
// // // // // // //    }
// // // // // // //}

//               Efficient solution
//                 we use Brian's and Karningam's algo

bool PowerOfTwo(int n)
{
    // if (n == 1)
    //     return false;     // below is what we can do to avide these two lines
    return (n && ((n & (n - 1)) == 0));
}

int main()
{
    bool result = PowerOfTwo(9);
    cout << result;
    return 0;
}