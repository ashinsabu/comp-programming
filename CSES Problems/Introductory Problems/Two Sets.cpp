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
 
    int n;
    cin>>n;
 
    if((n+1)%4!=0 && n%4!=0){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    if(n%4==0){
        cout<<n/2<<endl;
        int i=1;
        while(i<=n){
            cout<<i<<" "<<i+3<<" ";
            i+=4;
        }
        cout<<endl;
        i = 1;
        cout<<n/2<<endl;
        while(i<=n){
            cout<<i+1<<" "<<i+2<<" ";
            i+=4;
        }
        return 0;
    }
    cout<<n/2+1<<endl;
    int i=4;
    cout<<"1 2 ";
    while(i+3<=n){
        cout<<i<<" "<<i+3<<" ";
        i+=4;
    }
    cout<<endl<<n/2<<endl;
    cout<<"3 ";
    i=4;
    while(i+3<=n){
        cout<<i+1<<" "<<i+2<<" ";
        i+=4;
    }
    cout<<endl;
 
 
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    
}  