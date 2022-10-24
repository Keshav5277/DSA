#include <bits/stdc++.h>
using namespace std;

bool palindromeCheck(string str, int start, int end)
{
    if (start >= end)
        return true;
    return (str[start] == str[end]) && palindromeCheck(str, start + 1, end - 1);
}

int main()
{
    string str;
    cout << "Enter the string:\n";
    // cin>>str;
    getline(cin, str);
    int end = str.length();

    bool ispalin = palindromeCheck(str, 0, end - 1);
    // cout << ispalin;
    if (ispalin)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;
}