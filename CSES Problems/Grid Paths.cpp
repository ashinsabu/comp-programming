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

vector<vector<int>> dp;

int solve(vector<vector<char>> &grid,int x,int y, int n){
    if(grid[x][y] == '*')
        return 0;
    
    if(x == n-1 && y == n-1)
        return 1;


    if(dp[x][y] != -1)
        return dp[x][y];

    int pathsToBottom = 0, pathsToRight = 0;
    if(x<n-1 && grid[x+1][y] == '.'){
        pathsToRight = solve(grid,x+1,y,n);
    }
    if(y<n-1 && grid[x][y+1] == '.'){
        pathsToBottom = solve(grid,x,y+1,n);
    }

    return dp[x][y] = (pathsToBottom+pathsToRight)%MOD;
}

int32_t main()
{
    int n;
    cin>>n;
    vector<vector<char>> grid(n,vector<char>(n));
    for(int i=0;i<n;i++){
        for(int j = 0;j<n;j++)
            cin>>grid[i][j];
    }
    dp.resize(n,vector<int>(n,-1));
    debug(grid);
    cout<<(solve(grid,0,0,n))%MOD;

    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
}   


/*
I'm amazing, born on a full moon 
I was bred to get it in, no spoon 
That's why I'm so gone, 
summertime, in June
*/

