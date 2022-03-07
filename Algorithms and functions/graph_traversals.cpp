#include <bits/stdc++.h>

using namespace std;

const int N=8+1; // +1 to skip 0 index since 1 indexed graph
vector<bool> vis={0,0,0,0,0,0,0,0,0};
vector<int> adj[] = {{},{2},{1},{4},{3,5,6},{4,7},{4},{5},{}}; //1 indexed graph

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

int main(){    
    fulldfs();
    cout<<components;
}
