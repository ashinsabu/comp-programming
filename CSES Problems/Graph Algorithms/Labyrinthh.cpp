//https://cses.fi/problemset/task/1193/
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
    vector<vector<char>> grid(n,vector<char>(m));
    pair<int,int> source,dest;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
            if(grid[i][j]=='A')
                source = {i,j};
            if(grid[i][j]=='B')
                dest = {i,j};
        }
    }
    

    queue<pair<int,int>> q;
    vector<vector<char>> par(n,vector<char>(m));
    vector<vector<int>> dist(n,vector<int>(m,INT_MAX));

    dist[source.first][source.second] = 0;
    par[source.first][source.second] = 'O';
    q.push(source);
    while(!q.empty()){
        auto node = q.front();
        q.pop();

        if(node.first != 0 && 
            grid[node.first-1][node.second]!='#' && 
            dist[node.first-1][node.second] == INT_MAX){

            par[node.first-1][node.second] = 'U'; //reach node from parent by going Up
            dist[node.first-1][node.second] = dist[node.first][node.second]+1;
            q.push({node.first-1,node.second});
        }
        if(node.first !=n-1 &&
            grid[node.first+1][node.second]!='#' &&
            dist[node.first+1][node.second] == INT_MAX){

            par[node.first+1][node.second] = 'D'; //reach node from parent by going Down
            dist[node.first+1][node.second] = dist[node.first][node.second]+1;
            q.push({node.first+1,node.second});
        }
        if(node.second !=0 &&
            grid[node.first][node.second-1]!='#' &&
            dist[node.first][node.second-1]==INT_MAX){

            par[node.first][node.second-1] = 'L'; //reach node from parent by going Left
            dist[node.first][node.second-1] = dist[node.first][node.second]+1;
            q.push({node.first,node.second-1});
        }
        if(node.second != m-1 &&
            grid[node.first][node.second+1] != '#' &&
            dist[node.first][node.second+1] == INT_MAX){

            par[node.first][node.second+1] = 'R'; //reach node from parent by going Right
            dist[node.first][node.second+1] = dist[node.first][node.second]+1;
            q.push({node.first,node.second+1});
        }
    }

    // debugging code to display distances in error stream
    // for(int i=0;i<dist.size();i++){
    //     for(int j=0;j<dist[i].size();j++)
    //         cerr<<(dist[i][j]==INT_MAX?0:dist[i][j])<<' ';
    //     cerr<<endl;
    // }

    if(dist[dest.first][dest.second] == INT_MAX){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    cout<<dist[dest.first][dest.second]<<endl;

    vector<char> ans;
    // ans.push_back(par[dest.first][dest.second]);
    auto cur = dest;
    char parent = par[dest.first][dest.second];
    //flip the parent by 180degree to find direction for backtracking i.e L->R U->D
    while(parent!='O'){
        ans.push_back(parent);
        if (parent == 'U'){
            parent = par[cur.first+1][cur.second];
            cur.first+=1;
            continue;
        }
        if (parent == 'D'){
            parent = par[cur.first-1][cur.second];
            cur.first-=1;
            continue;
        }
        if (parent == 'L'){
            parent = par[cur.first][cur.second+1];
            cur.second+=1;
            continue;
        }
        if (parent == 'R'){
            parent = par[cur.first][cur.second-1];
            cur.second-=1;
            continue;
        }
    }
    reverse(ALL(ans));
    for(int i=0;i<ans.size();i++)
        cout<<ans[i];



    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    
}  


 
/*dont use ceil*/