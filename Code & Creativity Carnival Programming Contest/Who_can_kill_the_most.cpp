
// CF Handle : anik114911 




#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define fst                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long 
#define ld long double 
#define endl '\n'
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define e4 signed main()
#define Infinite void
#define PI 2.0 * acos(0.0)
using namespace std;
#ifdef LOKAL
#include "Debug_Template.h"
#else
#define HERE
#define debug(args...) 
#endif 
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
const ll mod = 1e9 + 7;

ll power(ll base, ll p){
    if(p == 0) return 1;
    ll x = power(base,p/2);
    if(p & 1) return (((x * x) % mod) * base) % mod;
    else return (x * x) % mod;
}
ll sq(ll n){
    ll res = (n * (n + 1)) % mod;
    ll res2 = ((2 * n) + 1) % mod;
    res = (res * res2) % mod;
    return (res * power(6,mod-2)) % mod;
}
ll sum (ll n){
    ll res = (n * (n + 1)) % mod;
    return (res * power(2,mod-2)) % mod;
}
Infinite Void() {
    ll n;
    cin >> n;
    ll res = sq(n); 
    ll res2 = sq(n-1);
    res = (res + res2) % mod;
    res = (res + sum(n-1)) % mod;
    cout << (2022 * res) % mod << endl;
}
e4{
    fst ll t = 1;
    cin >> t;
    for (ll i=1;i<=t;++i){
        // cout << "Case " << i << ": ";
        Void();
    }
    return 0;
}