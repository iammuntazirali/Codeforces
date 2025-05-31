#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define alls(x) x.begin(), x.end()
#define sz(x) (int)(x.size())
#define forn(i,n) for(int i=0; i<n; i++)
#define rep(i,n) for(int i=1; i<=n; i++)
#define inc(i,l,r,d) for(int i=l; i<=r; i+=d)
#define dec(i,r,l,d) for(int i=r; i>=l; i-=d) 
#define dbg(x) cerr << #x << " = " << x << endl;
#define nl cout << "\n";
#define sp cout << " ";
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
const ll inf = 1e16;
const ll mod = 998244353;
const ll mod1 = 1e9 + 87;
const ll mod2 = 127397154761;
ll qpow(ll a, ll b) {if (b == 0) return 1; ll ans = qpow(a, b >> 1); ans = ans*ans%mod; if(b&1) ans = ans*a%mod; return ans;}
ll gcd(ll a, ll b) {if (b == 0) return a; return gcd(b, a % b);}
ll lcm(ll a, ll b) {return a * b / gcd(a, b);}
ll sum(ll a, ll b) {a += b; if (a >= mod) a -= mod; return a;}
ll sub(ll a, ll b) {a -= b; if (a < 0) a += mod; return a;}
ll mul(ll a, ll b) {return a * b % mod;}
ll divi(ll a, ll b) {return a * qpow(b, mod - 2) % mod;}


//========================================
//Author:         Muntazir Ali
//Institution:    IIIT JABALPUR
//========================================

void ali(){
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    int gold(0),count(0);
    for(int i=0; i<n; i++){
        if(a[i]==0 && gold>0){
            count++; 
            gold--;
        }
        if(a[i]>=k) gold +=a[i];
    }
    cout << count << endl;
}
int main(){
    fast
    int t;
    cin >> t;
    while(t--){
        ali();
    }
    return 0;
}
