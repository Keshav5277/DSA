#include <bits/stdc++.h>
using namespace std;
//         Naive Approach    O(n * (n)^1/2)
//      For Printing all prime till N
//       Using Sieve of Eratosthenes     O(n(loglog(n)))

void PrintPrime(int n)
{
    vector<bool> isPrime(n, true);
    for(int i = 2; i * i <= n; i++)
    {
        if(isPrime[i])
            {
                for(int j = i * i; j <= n; j = j + i) //for(int j = 2 * i; j <= n; j = j + i)    i * i is better
                {
                    isPrime[j] = false;
                }
            }
    }
        cout<<"Prime till "<<n<<" are as follows : \n";
    for(int i = 2; i <= n; i++)
    {
        if(isPrime[i] == true)
            cout<<i<<" ";
    }
}

int main()
{
    cout<<"Enter a numbers :";
    int num;
    cin>>num;
    PrintPrime(num);
return 0;
}