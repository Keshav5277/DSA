#include <bits/stdc++.h>
using namespace std;
struct MyHash
{
    int BUCKET;
    list<int> *table;
    MyHash(int b)
    {
        this->BUCKET = b;
        table = new list<int> [BUCKET];
    }

    void Insert(int key)
    {
        int i = key % BUCKET;
        table[i].push_back(key);
    }
    void Remove(int key)
    {
        int i = key % BUCKET;
        table[i].remove(key);
    }
    void Search(int key)
    {
        int i = 0;
        while(i < BUCKET)
        {
        for (auto x : table[i])
        {
            cout<<x<<" ";
            // if (x == key)
            //     return true;
        }
        i++;
        }
        // return false;
    }
};
    void showlist(list<int> T)
    {
        list<int> :: iterator it;
        for(it = T.begin(); it != T.end(); ++it)
            cout<<*it<<" ";
    }
int main()
{
    MyHash lola(7);
    cout<<"lola Bucket : "<<lola.BUCKET;
    lola.Insert(70);
    lola.Insert(71);
    lola.Insert(9);
    lola.Insert(56);
    lola.Insert(72);
    lola.Search(72);
    showlist(lola.table[71]);
    return 0;
}