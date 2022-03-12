//First CSES graph problem. Gave idea of using DFS in grid type graphs. 
//Basic idea is to count connected components of dots in grid.
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
template<class T> void _print(multiset <T> v1){cerr << "[ "; for(T i:v1){_print(i); cerr << " "; } cerr << "]";}
template<class T,class U> void _print(map <T,U> v1){cerr << "[ "; for(auto& i:v1){_print(i.first); cerr << "-"; _print(i.second); cerr <<" , "; } cerr << "]";}
template<class T,class U> void _print(unordered_map <T,U> v1){cerr << "[ "; for(auto& i:v1){_print(i.first); cerr << "-"; _print(i.second); cerr <<" , "; } cerr << "]";}
template<class T,class U> void _print(multimap <T,U> v1){cerr << "[ "; for(auto& i:v1){_print(i.first); cerr << "-"; _print(i.second); cerr <<" , "; } cerr << "]";}

int n,m;
char a[1000][1000];
vector<vector<bool>> visited(1000,vector<bool>(1000,false)); //2d visited vector for dfs

void dfs(int i, int j){
    visited[i][j]=true;

    if(i!=n-1 && a[i+1][j]=='.' && !visited[i+1][j])
        dfs(i+1,j);
    if(i!=0 && a[i-1][j]=='.' && !visited[i-1][j])
        dfs(i-1,j);
    if(j!=m-1 && a[i][j+1]=='.' && !visited[i][j+1])
        dfs(i,j+1);
    if(j!=0 && a[i][j-1]=='.' && !visited[i][j-1])
        dfs(i,j-1);
}

int32_t main()
{
    
    cin>>n>>m;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    }

    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            if(a[i][j]=='.' && !visited[i][j]){
                ans++;
                dfs(i,j);
            }
    }
    cout<<ans;


}