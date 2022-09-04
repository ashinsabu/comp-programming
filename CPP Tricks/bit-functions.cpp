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

//returns the next integer with same number of set bits.
// i.e. 1111 is converted 10111
int next_popcount(int n) {
    int c = (n & -n), r = n + c;
    return (((r ^ n) >> 2) / c) | r;
}

int32_t main()
{
   int x0=1,x1=2,x2=4,x3=8;
   cout<<(__builtin_ffs(x0))<<" "<<(__builtin_ffs(x1))<<" "<<(__builtin_ffs(x2))<<" "<<(__builtin_ffs(x3))<<endl;
   // This function returns 1 + least significant 1-bit of x. If x == 0, returns 0. 

   cout<<(__builtin_clz(x0))<<" "<<(__builtin_clz(x1))<<" "<<(__builtin_clz(x2))<<" "<<(__builtin_clz(x3))<<endl;
    // This function returns number of leading 0-bits of x which starts from most significant bit position. 
    // x is unsigned int and like previous function this function with suffix 'l gets a unsigned long argument and with suffix 'll' gets a unsigned long long argument. 
    // If x == 0, returns an undefined value.

    cout<<(__builtin_ctz(x0))<<" "<<(__builtin_ctz(x1))<<" "<<(__builtin_ctz(x2))<<" "<<(__builtin_ctz(x3))<<endl;
    // This function returns number of trailing 0-bits of x which starts from least significant bit position. 
    // __builtin_ctz(16) = 4 because 16 is '...1 0000 '. Number of trailing 0-bits is 4.

    cout<<(__builtin_popcount(x0))<<" "<<(__builtin_popcount(x1))<<" "<<(__builtin_popcount(x2))<<" "<<(__builtin_popcount(x3))<<endl;
    // This function returns number of 1-bits of x.    
    // __builtin_popcount(14) = 3 because 14 is '... 111 0' and has three 1-bits.

    // OUTPUT of the program for understanding purposes:
    // 1 2 3 4
    // 31 30 29 28
    // 0 1 2 3
    // 1 1 1 1
}   
