vector<lli> fact(MAXN + 1), invFact(MAXN + 1);
void precomputeFactorials() {
    fact[0] = invFact[0] = 1;
    for (int i = 1; i <= MAXN; i++) {
        fact[i] = mul(fact[i - 1],i);
    }
    invFact[MAXN] = power(fact[MAXN], modu - 2);
    for (int i = MAXN - 1; i >= 1; i--) {
        invFact[i] = mul(invFact[i + 1], i + 1);
    }
}
lli nCr(lli n, lli r) {
    if (r > n || r < 0) return 0;
    return mul(fact[n], mul(invFact[r], invFact[n - r]));
}
