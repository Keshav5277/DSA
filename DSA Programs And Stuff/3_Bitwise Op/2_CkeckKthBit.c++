#include <bits/stdc++.h>
using namespace std;

// // //           suppose any no's lsb to ckeck it we simply AND it with 1(0001)
//                  so we can determine the msb

// Naive Approach says that to check kth bit we get a no. who's kth bit is set so we
// and we get that but knowing     kth bit set of a no == 2^(k-1)
// // // // // // // // /    bool IsOne(int num, int k)
// // // // // // // // /    {
// // // // // // // // /        int x = 1;
// // // // // // // // /        for(int i = 0; i < k - 1; i++)
// // // // // // // // /        {
// // // // // // // // /            x = x * 2;
// // // // // // // // /        }
// // // // // // // // /        if((num & x) != 0)
// // // // // // // // /        {
// // // // // // // // /            cout<<"The Rewuired but is set \n";
// // // // // // // // /        }
// // // // // // // // /        else{
// // // // // // // // /            cout<<"Not set\n";
// // // // // // // // /        }
// // // // // // // // /    }

/* another NAIVE solution was to do this     num / (2^(k - 1))
so what this does is get us to the kth bit by removing k - 1 bits on right side
eg  : if we divide a number with 2 its msb will be gone
      and if we again divide by 2 its next msb will be gone */




//                      Efficient solution
//                      we use right shift to get our kth bit at msb then just and it with one
//                      to check

void IsOne(int num, int k)
{
    int temp = num >> (k - 1);
    cout<<"just to check : "<< temp;
    if ((temp & 1) != 0)
        cout << "Kth bit is set\n";
    else
        cout << "Kth bit is not set\n";
}

int main()
{
    IsOne(5, 3);
    IsOne(5, 1);
    IsOne(5, 2);
    return 0;
}



/* Another efficient solution will be using left shift operator for a solution similar to first naive solution
like starting x from one and left shifting it till k - 1 and then AND it with  the given no*/