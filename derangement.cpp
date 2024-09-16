lli subfact(lli n) {
    if (n == 0) return 1;
    if (n == 1) return 0;
    lli derangement = 0, prev = 1, curr = 0;
    for (lli i = 2; i <= n; ++i) {
        derangement = (i - 1) * (curr + prev) % modu;
        prev = curr;
        curr = derangement;
    }
    return curr;
}
