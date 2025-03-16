
// CF Handle : anik114911 




#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define fst                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long 
#define endl '\n'
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define e4 int32_t main()
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

Infinite Void() {
    int m1,m2,q1,q2,k1,k2;
    vector<pair<int,int>> a,v;
    cin >> m1 >> m2 >> k1 >> k2 >> q1 >> q2;
    auto store = [&](vector<pair<int,int>> &a, int k1, int k2){
        for(int i=0;i<4;i++){
            if(i == 0){
                int f = k1 + m1;
                int s = k2 + m2;
                a.push_back({f,s});
                if(m1 != m2){
                    f = k1 + m2;
                    s = k2 + m1;
                    a.push_back({f,s});
                }
            }
            else if(i == 1){
                int f = k1 - m1;
                int s = k2 - m2;
                a.push_back({f,s});
                if(m1 != m2){
                    f = k1 - m2;
                    s = k2 - m1;
                    a.push_back({f,s});
                }
            }
            else if(i == 2){
                int f = k1 + m1;
                int s = k2 - m2;
                a.push_back({f,s});
                if(m1 != m2){
                    f = k1 + m2;
                    s = k2 - m1;
                    a.push_back({f,s});
                }
            }
            else if(i == 3){
                int f = k1 - m1;
                int s = k2 + m2;
                a.push_back({f,s});
                if(m1 != m2){
                    f = k1 - m2;
                    s = k2 + m1;
                    a.push_back({f,s});
                }
            }
        }
        return;
    };
    store(a,k1,k2);
    store(v,q1,q2);
    int cnt = 0;
    for(int i=0;i<a.size();i++){
        for(int j=0;j<v.size();j++){
            if(a[i] == v[j]) cnt++;
        }
    }
    cout << cnt << endl;
}
e4{
    fst int t = 1;
    cin >> t;
    for (int i=1;i<=t;++i){
        // cout << "Case " << i << ": ";
        Void();
    }
    return 0;
}
