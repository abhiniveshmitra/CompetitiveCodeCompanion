vector<lli> sieve(lli n)
{
vector<lli> prime(n+1,1);
prime[0]=prime[1]=0;
for(lli i=2;i<=n;i++)
{
    if(prime[i])
    {
        for(lli j=i*i;j<=n;j+=i)
        prime[j]=0;
    }
}
return prime;
}

