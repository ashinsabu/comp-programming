#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
 
#include <bits/stdc++.h>
 
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define vll vector<long long>
#define ALL(v) v.begin(), v.end()
#define SORT(v) sort(ALL(v))
 
#define int long long int
 
typedef long long ll;
const unsigned long long MOD = 998244353;
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr<< #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
void _print(int a){cerr << a;} /*void _print(long long a){cerr << a;}*/ void _print(char a){cerr << a;} void _print(string a){cerr << a;} void _print(bool a){cerr << a;}
template<class T> void _print(vector <T> v1){cerr << "[ "; for(T i:v1){_print(i); cerr << " "; } cerr << "]";}
template<class T> void _print(set <T> v1){cerr << "[ "; for(T i:v1){_print(i); cerr << " "; } cerr << "]";}
template<class T> void _print(multiset <T> v1){cerr << "[ "; for(T i:v1){_print(i); cerr << " "; } cerr << "]";}
template<class T,class U> void _print(map <T,U> v1){cerr << "[ "; for(auto& i:v1){_print(i.first); cerr << "-"; _print(i.second); cerr <<" , "; } cerr << "]";}
template<class T,class U> void _print(multimap <T,U> v1){cerr << "[ "; for(auto& i:v1){_print(i.first); cerr << "-"; _print(i.second); cerr <<" , "; } cerr << "]";}

int32_t main()
{
    IOS;
    int n;
    cin>>n;
    ll x=1ll*n*(n+1)/2;
    for(int i=0;i<n-1;i++){
        int tmp;
        cin>>tmp;
        x-=tmp;
    }
    cout<<x;
}