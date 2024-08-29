void primefactors(lli n, map<lli, lli> &mp)
{
    while (n % 2 == 0)
    {
        mp[2]++;
        n /= 2;
    }


    for (int i = 3; i <= sqrt(n); i += 2)
    {

        while (n % i == 0)
        {
            mp[i]++;
            n /= i;
        }
    }
    if (n > 2)
        mp[n]++;
}
