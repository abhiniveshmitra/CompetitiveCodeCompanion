lli subfact(lli n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 0;
    return n * subfact(n - 1) + power(-1,n);
}
