//Trivial DP problem with simple memoization.
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
 
const int N = 1e6 + 1;
 
vector<int> dp(N,0);
 
int solve(int n){
    if(n==0)
        return 1;
    if(dp[n]!=0)
        return dp[n];
 
    for(int i=1;i<=min(1LL*6,n);i++){
        dp[n] += solve(n-i)%MOD;
    }
    return dp[n]%MOD;
}
 
int32_t main()
{
    int n;
    cin>>n;
    cout<<solve(n);
    
}   
 