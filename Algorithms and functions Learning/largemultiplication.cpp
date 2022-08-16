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