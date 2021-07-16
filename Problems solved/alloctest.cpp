#include <iostream>
#include <algorithm>
using namespace std;



int main(){
    cout<<"test";
   int t,c=0;
   cin>>t;
   while(t--){
       c++;
       int a[100],ans=0;
       long n,b;
       cin>>n>>b;
       for(int i=0;i<n;i++)
       cin>>a[i];
       
       sort(a,a+n);
       
       if(a[0]>b){
           cout<<"Case #"<<c<<": 0\n";
           break;
       }
       int k=0;
       while(b>=0){
           b-=a[k];
           ans++;
           k++;
       }
    cout<<"Case #"<<c<<": "<<ans-1<<endl;
       
   }
}