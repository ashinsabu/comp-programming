//https://cses.fi/problemset/task/1667/
#include <bits/stdc++.h>

using namespace std;

#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define vll vector<long long>
#define ALL(v) v.begin(), v.end()
#define SORT(v) sort(ALL(v))
typedef long long ll;
const int MOD = 1e9 + 7;

#ifndef ONLINE_JUDGE
#define debug(x) cerr<< #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(int a){cerr << a;} /*void _print(long long a){cerr << a;}*/ void _print(char a){cerr << a;} void _print(string a){cerr << a;} void _print(bool a){cerr << a;} 
template<class T, class U> void _print(pair<T,U> p1){cerr<<"{"<<p1.first<<','<<p1.second<<"}";}
template<class T> void _print(vector <T> v1){cerr << "[ "; for(T i:v1){_print(i); cerr << " "; } cerr << "]";}
template<class T> void _print(set <T> v1){cerr << "[ "; for(T i:v1){_print(i); cerr << " "; } cerr << "]";}
template<class T> void _print(unordered_set <T> v1){cerr << "[ "; for(T i:v1){_print(i); cerr << " "; } cerr << "]";}
template<class T> void _print(multiset <T> v1){cerr << "[ "; for(T i:v1){_print(i); cerr << " "; } cerr << "]";}
template<class T,class U> void _print(map <T,U> v1){cerr << "[ "; for(auto& i:v1){_print(i.first); cerr << "-"; _print(i.second); cerr <<" , "; } cerr << "]";}
template<class T,class U> void _print(unordered_map <T,U> v1){cerr << "[ "; for(auto& i:v1){_print(i.first); cerr << "-"; _print(i.second); cerr <<" , "; } cerr << "]";}
template<class T,class U> void _print(multimap <T,U> v1){cerr << "[ "; for(auto& i:v1){_print(i.first); cerr << "-"; _print(i.second); cerr <<" , "; } cerr << "]";}


int32_t main()
{

    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj(n+1);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vi dist(n+1);
    vi parent(n+1);

    for(int i=0;i<n+1;i++)
        dist[i]=INT_MAX;

    dist[1]=0;
    queue<int> q;
    q.push(1);
    parent[1] = -1;

    while(!q.empty()){
        // debug(dist);
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

    if(dist[n]==INT_MAX){
        cout<<"IMPOSSIBLE";
        return 0;
    }

    vi ans;
    int par=n;

    while(par!=-1){
        ans.push_back(par);
        par=parent[par];
    }

    reverse(ALL(ans));

    // cout<<dist[n]<<endl;
    cout<<ans.size(); //we need number of nodes in shortest path not edges
    for(auto x: ans)
        cout<<x<<" ";


    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    
}  


 
/*dont use ceil*/