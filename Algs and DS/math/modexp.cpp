int pow(int x, int y, int m){
    int res = 1;

    x=x%m;
    if(!x) return x;

    while(y>0){
        if(y&1)
            res = (res*x)%m;
        y = y>>1;
        x = (x*x)%m;
    }
    return res;
}