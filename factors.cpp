vector<lli> factors(lli n)
{
    vector<lli> facs;
    for(lli i=2;i*i<=n;i++)
    {
        if(!(n%i))
        {
            lli ct=0;
            while(n%i==0)
            {
                n/=i;
                ct++;
            }
            facs.pb(power(i,ct));
        }
    }
    if(n>1)
    {
        facs.pb(n);
    }
    return facs;
}
