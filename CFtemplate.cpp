#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
ll modu = (ll)1e9+7;
ll inf=(ll)1e18;
#define DEBUG(x...) { cout << "(" << #x << ")" << " = ( "; Print(x); }
template <typename T1> void Print(T1 t1) { cout << t1 << " )" << endl; }
template <typename T1, typename... T2>
void Print(T1 t1, T2... t2) { cout << t1 << " , "; Print(t2...); }
#define fo(i, n) for (int i = 0; i < n; i++)
#define fo1(i, n) for (int i = 1; i <=n; i++)
#define ci(x) cin>>x
#define foa(it,n) for(auto& it: n)
#define pb push_back
#define mkp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define pr(x) cout << x << endl
#define prs(x) cout << x << " "
#define br cout << endl
#define MOD(a, b) (((a) % (b) + (b)) % (b))
#define pll pair<ll, ll>
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ub(x,t) upper_bound(all(x),t)
#define lb(x,t) lower_bound(all(x),t)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
ll getno(ll l, ll r) {return uniform_int_distribution<ll>(l, r)(rng);}
void solve()
{
    ll n,m,k;
    ci(n);
    vector<ll> a(n);
    fo(i,n) ci(a[i]);
}
int main() {
    FAST_IO;
    int tests=1;
    cin>>tests;
    while (tests--)
    {
        solve();
    }
    return 0;
}
