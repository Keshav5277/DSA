#include <bits/stdc++.h>
using namespace std;

// /// // /// //// //    EFFICIENT WAY SAYS TO CALCULATE BOTH SUFFIX SUM ARRAY AND PREFIX SUM ARRAY
// /// // / / / / / / / / DAMN I JUST NOTICED SOMETHING IF THE POINT IS EQUILIBRIUM THEN  AT THAT 
//  / / / / / / / / / / / /INDEX SUFFIX AND PREFIX IS EQUAL
//                         so this make the code much shorter but lets just fk out of here so future me if
//                         you are here keep it in mind !!!!!!
void EquilibriumPoint(vector<int> arr)
{
    // suffix sum
    vector<int> suffix = arr;
    for (int i = arr.size() - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i] + suffix[i + 1];
    }

    cout << "\n Suffix array:\n";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << suffix[i] << " ";
    }
    // prefix sum
    vector<int> prefix = arr;
    for (int i = 1; i < arr.size(); i++)
    {
        prefix[i] = prefix[i] + prefix[i - 1];
    }

    cout << "\nprefix array:\n";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << prefix[i] << " ";
    }

    int value = 0;
    do
    {
        cout << "enter index element you want to check and 69 for exit : \n";
        cin >> value;
        if (value == 0)
            if (suffix[1] == 0)
                cout << "Equilibrium\n";
            else
                cout << "Not Equilibrium\n";

        else if (value == arr.size() - 1)
            if (prefix[arr.size() - 2] == 0)
                cout << "Equilibrium\n";
            else
                cout << "Not Equilibrium\n";

        else if (suffix[value + 1] == prefix[value - 1])
            cout << "Point is equibrium \n";
        else
            cout << "point is not equilibrium \n";

    } while (value != 69);
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

    EquilibriumPoint(arr);

    return 0;
}