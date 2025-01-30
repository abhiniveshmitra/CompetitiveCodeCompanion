ll mul(ll a, ll b) {
  return  ( a * b % modu);
}
ll power(ll a, ll b) {
  ll res = 1;
  while (b > 0) {
    if (b & 1) {
      res = mul(res, a);
    }
    a = mul(a, a);
    b >>= 1;
  }
  return res;
}
