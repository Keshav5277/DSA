#include <bits/stdc++.h>
using namespace std;

// bool IsPrime(int n)
// {
//     if (n == 1)
//         return false;
//     if (n == 2 || n == 3)
//         return true;
//     if (n % 2 == 0 || n % 3 == 0)
//         return false;
//     else
//         for (int i = 5; i * i < n; i = i + 6)
//             if (n % i == 0 || n % (i + 2) == 0)
//                 return false;
//     return true;
// }
//                Naive Solution
// // // // // // // void PrintPrimeFactors(int num)
// // // // // // // {
// // // // // // //     for (int i = 2; i < num; i++)
// // // // // // //     {
// // // // // // //         if (IsPrime(i))
// // // // // // //         {
// // // // // // //             int x = i;
// // // // // // //             while (num % x == 0)
// // // // // // //             {
// // // // // // //                 cout << i << " ";
// // // // // // //                 x = x * i;
// // // // // // //             }
// // // // // // //         }
// // // // // // //     }
// // // // // // // }

    //           EFFICIENT solution  :   well the pairs stuff

void PrintPrimeFactors(int n)
{
    if(n <= 1)
        return;
    for(int i = 2; i * i <= n; i ++)
    {
        while(n % i == 0)
        {
            cout<<i<<" ";
            n = n / i;
        }
    }    
    if(n > 1)
        cout<<n<<" ";
}        

int main()
{
    cout << "Enter a number: ";
    int num;
    cin >> num;
    PrintPrimeFactors(num);
    return 0;
}