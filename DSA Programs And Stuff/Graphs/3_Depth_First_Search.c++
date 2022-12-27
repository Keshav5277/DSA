#include <bits/stdc++.h>
using namespace std;

void DFS_Recursion(vector<int> adj[], bool visited[], int src)
{
    visited[src] = true;
    cout << src << " ";
    for (int x : adj[src])
    {
        if (visited[x] == false)
        {
            DFS_Recursion(adj, visited, x);
        }
    }
}

void DFS(vector<int> adj[], int v, int src)
{
    bool visited[v];
    for(int i = 0; i < v; i++)
        visited[i] = false;
    cout << "\nFollowing is the DFS traversal of given graph\n";
    DFS_Recursion(adj, visited, src);
}

void AddEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void PrintGraph(vector<int> adj[], int v)
{
    cout << "Input Graph : \n";
    for (int i = 0; i < v; i++)
    {
        cout << i << " ";
        for (int x : adj[i])
        {
            cout << "-> " << x << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    int v = 5;
    vector<int> adj[v];
    AddEdge(adj, 0, 1);
    AddEdge(adj, 0, 2);
    AddEdge(adj, 1, 2);
    AddEdge(adj, 2, 3);
    AddEdge(adj, 1, 3);
    AddEdge(adj, 3, 4);
    AddEdge(adj, 2, 4);

    PrintGraph(adj, v);

    DFS(adj, v, 0);
    return 0;
}