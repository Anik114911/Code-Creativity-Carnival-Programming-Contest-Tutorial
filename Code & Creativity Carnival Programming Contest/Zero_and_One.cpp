
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

Infinite Void() {
    int zero,one,k;
    cin >> zero >> one >> k;
    if(max(zero,one) < k){
        cout << -1 << endl;
        return;
    }
    if(zero >= one){
        int rem = zero - k;
        if(rem > one){
            cout << -1 << endl;
            return;
        }
        for(int i=0;i<k;i++) cout << '0';
        for(int i=0;i<rem;i++){
            cout << "10";
            one--;
        }
        for(int i=0;i<one;i++) cout << '1';
        cout << endl;
    }
    else{
        int rem = one - k;
        if(rem > zero){
            cout << -1 << endl;
            return;
        }
        for(int i=0;i<k;i++) cout << '1';
        for(int i=0;i<rem;i++){
            cout << "01";
            zero--;
        }
        for(int i=0;i<zero;i++) cout << '0';
        cout << endl;
    }
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
