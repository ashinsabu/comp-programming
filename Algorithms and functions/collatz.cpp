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