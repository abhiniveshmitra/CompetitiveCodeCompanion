lli expo(lli a,lli b, lli modu)
{
    if(!b)return 1;
    lli res=expo(a,b/2,modu);
    if(b&1)
    {
        return (res*res*a)%modu;
    }
    else
    return (res*res)%modu;

}
