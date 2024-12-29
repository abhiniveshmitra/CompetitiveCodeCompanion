
static const int MAXN = 200000;
static vector<ll> fact, invFact;

// Modular exponentiation
ll modExp(ll base, ll exp, ll mod) {
    ll result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

// Precompute factorials and inverse factorials up to MAXN
void precomputeFactorials() {
    fact.resize(MAXN+1);
    invFact.resize(MAXN+1);

    fact[0] = 1;
    for (int i = 1; i <= MAXN; i++) {
        fact[i] = (fact[i-1] * i) % modu;
    }
    invFact[MAXN] = modExp(fact[MAXN], modu-2, modu);  // Fermat's little theorem
    for (int i = MAXN-1; i >= 0; i--) {
        invFact[i] = (invFact[i+1] * (i+1)) % modu;
    }
}


ll nCr(ll n, ll r) {
    if (r < 0 || r > n) return 0;
    return fact[n] * invFact[r] % modu * invFact[n-r] % modu;
}
