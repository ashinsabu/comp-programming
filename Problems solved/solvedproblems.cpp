#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>


typedef long long ll;

using namespace std;
//first difficult problem taxi CF 158/B
void taxi()
{
     int s[100000];
    ll n,one=0,two=0,three=0,four=0;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>s[i];
    int taxis=0;
    for(int i=0;i<n;i++){
        if(s[i]==1)
        one++;
        else if(s[i]==2)
        two++;
        else if(s[i]==3)
        three++;
        else if(s[i]==4)
        four++;
    }
    // cout<<one<<" "<<two<<" "<<three<<" "<<four<<endl;
    taxis+=four;
    // cout<<taxis<<endl;
    
    if((one>0)&&(three>0)){
    taxis+=min(three,one);
    if(three<one){one-=three;three=0;}
    if(one<three){three-=one;one=0;}
    }
    if(one==three)
    one=three=0;
    // cout<<taxis<<endl;
    taxis+=(two/2);
    if(two>=2){
        two=two%2;
    }
    // cout<<taxis<<endl;
    //there are either some ones left or threes left or both zero. either one or zero twos left
    if((one!=0)&&(two!=0))
    {
        taxis++;
        two--;
        one-=2;
    } 
    if(one<0) one=0;
    //twos are all gone, either one is (-1) or there are some threes left
    if((three!=0)||(two!=0)){
        if(two!=0){
            taxis++;//for the one two that maybe left
        two--;
        }
        // cout<<taxis<<endl;
        taxis+=three;//each three group needs one taxi
        // cout<<taxis;
        three=0;
    }
    if(one!=0)
    {
        taxis+=(one/4);
        if(one<4)
        taxis++;
    }
    // if(one==two==three==four==0)
    // cout<<"worked: "<<taxis;
cout<<taxis;
    
    
}
// https://www.codechef.com/JULY21C/p/XXOORR first challenging XOR problem(to learn more about XOR and bit manipulation)
void xxoorr()
{
    
    ll t;
    cin>>t;
    while(t--){
        ll n,k,a[100000];
        cin>>n>>k;
        for(ll i=0;i<n;i++)
        cin>>a[i];
        int p_max,op=0;
        //finding max for p
        for(int i=0;(pow(2,i)<=*max_element(a,a+n));i++)
            p_max=i;
        // cout<<p_max<<endl;
        //p loop
        for(int p=0;p<=p_max;p++){
            ll c=0;
            for(ll i=0;i<n;i++){
                if( ( a[i]^(int)(pow(2,p)) ) == ( a[i]-pow(2,p) ) )
                {
                ++c;
                if (c%k==0)
                op++;
                a[i]-=pow(2,p);
                // cout<<a[i]<<" ";
                }
            }
                if(c%k!=0)
                op++;
        }
        // cout<<endl<<"final ar"<<endl;
        // for(int i=0;i<n;i++)
        // cout<<a[i]<<" ";
        cout<<op<<endl;
    }
}

//String Task-118A (1.remove vow 2.dots before consonants 3.uppercase cons to lowercase)

bool isvowel(char ch) { return (ch == 'y') ||(ch == 'Y') ||(ch == 'a') || (ch == 'e') ||(ch == 'i') ||(ch == 'o') ||(ch == 'u')||(ch == 'A') || (ch == 'E') ||(ch == 'I') ||(ch == 'O') ||(ch == 'U'); }
void stringtask()
{
    string word;
    cin>>word;
    for(int i=0;i<word.length();i++){
        if(isvowel(word[i]))
        word.replace(i,1," ");
    }
    word.erase(remove(word.begin(),word.end(),' '),word.end());
    string word2;
    for(int i=0;i<word.length();i++){
       word2.push_back('.');
       word2.push_back(word[i]);
    }
    for(int i=0;i<word2.length();i++){
        if((word2[i]>=65)&&(word2[i]<=90))
        word2[i]+=32;
    }
    cout<<word2;
}
//Helpful math-339A(Good to revise stringstream "1+2+4+3+7+2"--->"1+2+2+3+4+7")
void helpfulmath()
{
    
    string q,ans;
    cin>>q;
    stringstream ss(q);
    vi ser; int tmp; char ch;
    for(int i=0;i<(q.length()/2);i++)
    {
        ss>>tmp;
        ss>>ch;
        ser.push_back(tmp);
    }
    ss>>tmp;
    ser.push_back(tmp);//last number
    sort(ser.begin(),ser.end());
    stringstream anss;
    for(int i=0;i<ser.size()-1;i++)
    {
         anss<<ser[i];
         anss<<'+';
    }
     anss<<ser[ser.size()-1];
     ans=anss.str();
     cout<<ans;
}

int main()
{
    IOS;  

}