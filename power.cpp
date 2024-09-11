lli mul(lli a, lli b) {
  return  ( a * b % modu);
}
lli power(lli a, lli b) {
  lli res = 1;
  while (b > 0) {
    if (b & 1) {
      res = mul(res, a);
    }
    a = mul(a, a);
    b >>= 1;
  }
  return res;
}
