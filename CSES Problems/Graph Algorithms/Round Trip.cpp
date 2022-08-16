//https://cses.fi/problemset/result/4437630/ Pre Req - dfs with keeping track of parents
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


vi adj[100001];
vector<int> pars(100001,-1);
vector<bool> vis(100001, false);
pair<int,int> ans;

void dfs(int node, int par){

    vis[node] = true;
    pars[node] = par;
    for(int i=0;i<adj[node].size();i++){

        if(vis[adj[node][i]]){
            if(adj[node][i]!=par){ // back edge found
                ans = {node,adj[node][i]};
            }
        }

        if(!vis[adj[node][i]])
            dfs(adj[node][i],node);        

    }
}

int32_t main()
{
    pars[1] = -1;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vi finalans;
    for(int i=1;i<=n;i++){
        if(!vis[i])
            dfs(i,pars[i]);
    }
    debug(ans);
    finalans.push_back(ans.second);
    int x = pars[ans.second];
    if(!ans.first && !ans.second){
        cout<<"IMPOSSIBLE";
        return 0;
    }
    while(true){

        finalans.push_back(x);
        if(x==ans.first)
            break;
        x=pars[x];
        
    }

    finalans.push_back(finalans[0]);
    

    cout<<finalans.size()<<endl;
    for(int i=0;i<finalans.size();i++)
        cout<<finalans[i]<<" ";
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    
}   

/*dont use ceil*/