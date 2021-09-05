//Ashin Sabu - https://www.linkedin.com/in/ashin-sabu-1059a6175/ - https://github.com/ashinsabu
// #include<bits/stdc++.h> 
//compiles all headers
#include <iostream>
#include <conio.h>
//to use the IOS function to disable sync with stdio
#include <algorithm>
//for __gcd(),
#include <vector>
//for stl vectors

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define vll vector<long long>
#define ALL(v) v.begin(), v.end()
#define SORT(v) sort(ALL(v))

typedef long long ll;
using namespace std;
void collatzconjecturetest(){
    ll nn; ll operations=0;
    int a=0;
    for(nn=5;nn<10000000;nn++)
    {
        ll n=nn;
        while(n!=1){
            if(n%2==0){
                operations++;
                n=n/2;
            }
            else if(n%2==1){
                n=(n*3)+1; operations++;
            }
        }
        if(n==1) continue;
        else a++;
    }
    cout<<a<<endl<<operations;//always comes out to 1 for every number, operations is to find operations per second of cpu
}
void largemultiply(vector<int> &a,int &m,int n)
//vector with digits arranged in reverse order, number of digits in vector, number to multiply by
{
    int temp=0;
    for(int i=0;i<m;i++){
        int x=(n*a[i]+temp);
        a[i]=x%10;
        temp=x/10;
    }
    while(temp){
        a.push_back(temp%10);
        temp/=10;
        m++;
    }
}
//fast calculate ncr(also has case for r>n printing 0)
long long calcNcR(int n, int r)
{
 
 if(r>n)
 return 0;
 
    long long p = 1, k = 1;
 

    if (n - r < r)
        r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
 
            long long m = __gcd(p, k);
 
         
            p /= m;
            k /= m;
 
            n--;
            r--;
        }
 
        
    }
 
    else
        p = 1;
 
    return p;
}

int main()
{
    IOS;
}