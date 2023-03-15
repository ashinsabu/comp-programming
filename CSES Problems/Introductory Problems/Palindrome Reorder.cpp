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

void solve(){
    string s;
    cin>>s;
    map<char,int> freq;
    for(auto x: s) freq[x]++;
    int cntodd = 0;

    char oddChar = '-'; int oddCharCnt = 0;

    // debug(freq);
    
    for(auto it: freq){
        if(it.second % 2 == 1) {
            cntodd++;
            oddChar = it.first;
            oddCharCnt = it.second; 
        }
    }
    if(cntodd > 1){
        cout<<"NO SOLUTION";
        return;
    }
    string res1 = "", res2 ="";
    for(auto it: freq){
        if(it.second%2 == 0){
            for(int i = 0;i<it.second/2;i++){
                res1.push_back(it.first);
            }
        }
    }
    for(int i = 0;i<oddCharCnt;i++) res2.push_back(oddChar);
    string res3 = res1; reverse(ALL(res3));
    cout<<res1<<res2<<res3;
}

int32_t main()
{
    IOS;
    int tt = 1;
    // cin>>tt;
    while(tt--){
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
}   


