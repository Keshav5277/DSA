// #include <bits/stdc++.h>
// using namespace std;

// void AddEdge(vector<int> adj[], int u, int v)
// {
//     adj[u].push_back(v);
//     adj[v].push_back(u);
// }

// void PrintGraph(vector<int> adj[], int v)
// {
//     for (int i = 0; i < v; i++)
//     {
//         cout << "Head{ " << i << " }";
//         for (auto k : adj[i])
//         {
//             cout << " -> " << k;
//         }
//         cout << endl;
//     }
// }

// void BFS(vector<int> adj[], int v, int s)
// {
//     bool visited[v];
//     for (int i = 0; i < v; i++)
//         visited[i] = false;

//     queue<int> q;
//     visited[s] = true;
//     q.push(s);

//     while (q.empty() == false)
//     {
//         int u = q.front();
//         q.pop();
//         cout << u << " ";
//         for (int x : adj[u])
//         {
//             if (visited[x] == false)
//             {
//                 visited[x] == true;
//                 q.push(x);
//             }
//         }
//     }
// }

// int main()
// {
//     int V = 5;
//     vector<int> adj[V];
//     AddEdge(adj, 0, 1);
//     AddEdge(adj, 0, 2);
//     AddEdge(adj, 1, 2);
//     AddEdge(adj, 2, 3);
//     AddEdge(adj, 1, 3);
//     AddEdge(adj, 3, 4);
//     AddEdge(adj, 2, 4);

//     // PrintGraph(adj, V);
//     cout << endl
//          << endl;

//     BFS(adj, V, 0);
//     return 0;
// }
#include<bits/stdc++.h> 
using namespace std; 

void BFS(vector<int> adj[], int V, int s) 
{ 
	bool visited[V]; 
	for(int i = 0; i < V; i++) 
		visited[i] = false; 

	queue<int>  q;
	
	visited[s] = true; 
	q.push(s); 

	while(q.empty()==false) 
	{ 
		int u = q.front(); 
		q.pop();
		cout << u << " "; 
		 
		for(int v:adj[u]){
		    if(visited[v]==false){
		        visited[v]=true;
		        q.push(v);
		    }
		} 
	} 
} 

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main() 
{ 
	int V=5;
	vector<int> adj[V];
	addEdge(adj,0,1); 
	addEdge(adj,0,2); 
	addEdge(adj,1,2); 
	addEdge(adj,2,3); 
	addEdge(adj,1,3);
	addEdge(adj,3,4);
	addEdge(adj,2,4);

	cout << "Following is Breadth First Traversal: "<< endl; 
	BFS(adj,V,0); 

	return 0; 
} 
