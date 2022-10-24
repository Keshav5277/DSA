#include <bits/stdc++.h>
using namespace std;

void TOH(int N, char A, char B, char C)
{
    if (N == 1)
    {
        cout << "Disk - 1 Moved from " << A << " To " << C << endl;
        return;
    }

    TOH(N - 1, A, C, B);
    cout << "Disk - " << N << " Moved from " << A << " To " << C << endl;
    TOH(N - 1, B, A, C);
}

int main()
{
TOH(3, 'A', 'B', 'C');
    return 0;
}
