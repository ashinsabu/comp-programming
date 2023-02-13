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
    int n,x;
    cin>>n>>x;
    vector<int> c(n);
    for(int i=0;i<n;i++)
        cin>>c[i];
    if(c.size() == 1){
        if(x%c[0] == 0){
            cout<<1;
        }
        else
            cout<<0;
        return 0;
    }
    vector<int> dp(x+1,0);
    dp[0] = 1;
    //curleft , coinidx
    for(int i=0;i<c.size();i++){
        for(int j = 0;j<=x;j++){
            if(j-c[i] >= 0){
                dp[j] += dp[j-c[i]];
                dp[j] %= MOD;
            }
        }
    }
    cout<<dp[x];
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
}   


/*
I'm amazing, born on a full moon 
I was bred to get it in, no spoon 
That's why I'm so gone, 
summertime, in June
*/

