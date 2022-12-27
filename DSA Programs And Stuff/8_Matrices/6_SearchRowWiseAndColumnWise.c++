#include <bits/stdc++.h>
using namespace std;
int main()
{

    int rows = 4, columns = 4;
    int arr[rows][columns] = {{10, 20, 30, 40}, {15, 25, 35, 45}, {27, 29, 37, 48}, {32, 33, 39, 50}};

    int top = 0;
    int left = columns -1;
    int key = 29;

    while(top < rows && left >= 0)
    {
        if(arr[top][left] == key)
            {
                cout<<"Element found at: ("<<top<<" , "<<left<<")\n";
                return 0;
            }
        if(key < arr[top][left])
            left--;
        else
            top++;        
    }
    cout<<"Element not found";

return 0;
}