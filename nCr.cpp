vector<lli> fact, invFact;

void precomputeFactorials(lli n) {
    fact.assign(n + 1, 1);
    invFact.assign(n + 1, 1);

    for (lli i = 2; i <= n; i++) {
        fact[i] = mul(fact[i - 1], i);
    }
    invFact[n] = modinv(fact[n], modu);
    for (lli i = n - 1; i >= 1; i--) {
        invFact[i] = mul(invFact[i + 1], i + 1);
    }
}

lli ncr(lli n, lli r) {
    if (r > n) return 0;
    return mul(fact[n], mul(invFact[r], invFact[n - r]));
}
