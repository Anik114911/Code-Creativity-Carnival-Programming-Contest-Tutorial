
// CF Handle : anik114911 



#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define fst                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using ll = long long;
using ld = long double;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl '\n'
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define e4 signed main()
#define Infinite void 
#ifdef LOKAL
#include "Debug_Template.h"
#else
#define HERE
#define debug(args...) 
#endif 
using namespace std;
using namespace __gnu_pbds;
template <typename T> using pbds = tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>;
const double PI = 2.0 * acos(0.0);
const ll mod = 1e9 + 7;

Infinite Void() {
    int a,b,k1,k2,q1,q2;
    cin >> a >> b >> k1 >> k2 >> q1 >> q2;
    vector<pair<int,int>> d = {{a,b},{a,-b},{-a,b},{-a,-b},{b,a},{b,-a},{-b,a},{-b,-a}};
    set<pair<int,int>> s1,s2;
    for(int i=0;i<8;i++) s1.insert({k1+d[i].first,k2+d[i].second});
    for(int i=0;i<8;i++) s2.insert({q1+d[i].first,q2+d[i].second});
    int cnt = 0;
    for(auto x : s1){
        auto it = s2.find(x);
        if(it != s2.end()) cnt++;
    }
    cout << cnt << endl;
}
e4{
    fst int t = 1;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        // cout << "Case " << i << ": ";
        Void();
    }
    return 0;
}
