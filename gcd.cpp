lli  gcd(lli a,lli b)
{
  if(!b) return a;
  else return gcd(b,a%b);
}
