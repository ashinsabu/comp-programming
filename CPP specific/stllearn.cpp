#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;
using namespace std;

void vectorprac();
void setprac();
int main()
{
    IOS;
    //vectorprac();
    setprac();
}

void vectorprac()
{
    vector<int> a={2,4,1,129,92,12};

    vector<int>::iterator it1=a.begin();

    advance(it1,2);

    vector<int> b={1,2,3};
    //copy(b.begin(),b.end(),it1); replaces elements from it1 to whatever is needed
    // copy(b.begin(),b.end(),inserter(a,it1));
     //inserts elements from wherever needed without replacing and also increases container size(messes up a lot of iterator function like prev,upper and lower bound etc)
    //use a.insert(a.begin()+x) directly instead of this to prevent multiple reallocations of buffer
    for(int &x: a)
    cout<<x<<" ";
    
    advance(it1,2);
    cout<<endl<<*it1;
    auto it2=next(it1);
    //not sure why prev(it1) returns wrong vals
    cout<<endl<<*it2;
    auto it3=lower_bound(a.begin(),a.end(),129);//return iterator of first element >=129
    cout<<endl<<"Lower bound test: "<<*it3;
    auto it4=upper_bound(a.begin(),a.end(),3);//return iterator of first element strict >3
    cout<<endl<<"Upper bound test: "<<*it4;
    bool tf = binary_search(a.begin(),a.end(),4);
    cout<<endl<<tf;
    
}

void setprac()
{
    // set<int> set1={6,5,3,4};
    // set1.insert(2);
    // for(int tmp: set1)
    // cout<<tmp<<" ";
    // //finding eles positions in set
    // auto it1=set1.find(3);
    // if(it1==set1.end())
    // cout<<"not found";
    // else
    // cout<<endl<<"found at index: "<<distance(set1.begin(),it1);
    pair<int, ll> a={1,3};
    
}
