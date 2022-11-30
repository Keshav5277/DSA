#include <bits/stdc++.h>
using namespace std;

struct Jobs
{
    char id;
    int deadline;
    int profit;
};

bool compare(Jobs a, Jobs b)
{
    return (a.profit > b.profit);
}

void jobSequencing(Jobs arr[], int size)
{
    // char track[size];
    bool slot[size] = {false,false,false,false,false};
    // track[0] = arr[0].id;
    int mprofit = 0;
    int result[size] = {-1,-1,-1,-1,-1};
    for (int i = 0; i < size; i++)
    {
        // for (int j = min(size,arr[i].deadline) - 1; j >= 0; j--)
        for (int j = arr[i].deadline - 1; j >= 0; j--)
        {
            if (slot[j] == false)
            {
                // track[j] = arr[i].id;
                result[j] = i;
                slot[j] = true;
                // mprofit = mprofit + arr[i].profit;
                break;
            }
        }
    }

    cout<<"Assigned jobs : "<<endl;
    for(int i = 0; i < size; i++)
    {
        cout<<arr[result[i]].id<<"\t";
        mprofit += arr[result[i]].profit;
    }
    
    cout<<"Profit : "<<mprofit<<endl;
}

int main()
{
    Jobs arr[] = {{'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27}, {'d', 1, 25}, {'e', 3, 15}};

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i].id << "\t" << arr[i].deadline << "\t" << arr[i].profit << endl;
    }

    sort(arr, arr + 5, compare);

    cout << endl
         << "Sorted Jobs:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i].id << "\t" << arr[i].deadline << "\t" << arr[i].profit << endl;
    }
   
    jobSequencing(arr, 5);

    return 0;
}