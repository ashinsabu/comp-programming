//Ashin Sabu - https://www.linkedin.com/in/ashin-sabu-1059a6175/ - https://github.com/ashinsabu
//pragmas directive allows use of suppressed optimizations available
//only in g++ compilers(won't work on gcc compilers)
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")

#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//disables synchronization between C and C++ std streams(cannot mix C and C++ style I/O's with usage of this)
//cin tie null and cout tie null unties the default(use only when not using stuff like "Enter name: " and then taking input)
#define vi vector<int>
#define vll vector<long long>
#define ALL(v) v.begin(), v.end()
#define SORT(v) sort(ALL(v))

typedef long long ll;

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS;  
    //cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
    //for printing runtime if using compiler/ide/editor without time feature
}
