vector<lli> euler_pre(lli n)
{
    vector<lli> res(n+1);
    fo(i,n+1)res[i]=i;
    for(lli i=2;i*i<=n;i++)
    {
        if(!(res[i]-i))
        {
           for(lli j=i;j<=n;j+=i)
           {
            res[j]-=res[j]/i;
           }
        }
    }
    return res;
}
