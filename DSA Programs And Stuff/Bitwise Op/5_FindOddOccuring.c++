#include <bits/stdc++.h>
using namespace std;

//                    Naive solution as u would would expect
//                    *** Efficient solution ****
//                   using XOR properties ->  x ^ x = 0    |    x ^ 0 = x
//                    so we just XOR all elements and we get our result

int OddOccuring(vector<int> arr)
{
    int temp = arr[0];
    for(int i = 1; i < arr.size(); i++)
    {
        temp = temp ^ arr[i];
    }
    return temp;
}

int main()
{
    vector<int> arr;
    int value = 0, count = 0;
    while (true)
    {
        cout << "Enter arr element or '6969' for terminate [" << ++count << "] : ";
        cin >> value;
        if (value == 6969)
        {
            break;
        }
        arr.push_back(value);
    }
    cout << "Inputed array:\n";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Odd appearing element : " << OddOccuring(arr) << endl;
    return 0;
}