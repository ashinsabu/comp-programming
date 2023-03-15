#include <bits/stdc++.h>

using namespace std;

const int N=8+1; // +1 to skip 0 index since 1 indexed graph
vector<bool> vis={0,0,0,0,0,0,0,0,0};
vector<int> adj[] = {{},{2},{1},{4},{3,5,6},{4,7},{4},{5},{}}; //1 indexed graph
vector<int> dist(N=1);

//  Recursive DFS for single connected component graph
void dfs(int u){
    vis[u]=true;
    for(auto x: adj[u]){
        if(!vis[x])
            dfs(x);
    }
}

int components=0;

//  Complete DFS for multiple connected components graph
void fulldfs(){
    for(int i=1;i<N;i++){        
        if(!vis[i]){
            components++;
            dfs(i);
        }
    }
}

void simplebfs(){
 
    for(int i=0;i<n+1;i++)
        dist[i]=INT_MAX;
 
    dist[1]=1;
    queue<int> q;
    q.push(1);
    parent[1] = -1;
 
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(int nextNode: adj[node]){            
            if(dist[nextNode] == INT_MAX){
                dist[nextNode] = dist[node]+1;
                parent[nextNode] = node;
                q.push(nextNode);
            } 
        }
    }
}

int main(){    
    fulldfs();
    cout<<components;
    
}
