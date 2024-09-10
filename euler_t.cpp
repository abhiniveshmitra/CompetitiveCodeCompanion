lli euler_t(lli n)
{
    lli res=n;
    for(lli i=2;i*i<=n;i++)
    {
        if(!(n%i))
        {
            while(!(n%i))n/=i;
            res-=res/i;
        }
    }
    if(n>1)res-=res/n;
    return res;
}
