vector<lli> sieve(lli n,vector<lli>& spf)
{
vector<lli> prime(n+1,1);
fo(i,n+1)spf[i]=i;
prime[0]=prime[1]=0;
for(lli i=2;i<=n;i++)
{
    if(prime[i])
    {
        for(lli j=i*i;j<=n;j+=i)
        {
             prime[j]=0;
             spf[j]=min(spf[j],i);
        }

    }
}
return prime;
}

