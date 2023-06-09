#include <bits/stdc++.h>
#define ll long long
#pragma GCC optimize("Ofast")
const ll mod = (ll)1e9 + 7;
#define endl "\n"
#define maxn 1000006
#define _oo LLONG_MIN
#define oo LLONG_MAX - 9
#define bit(x, i) ((x >> i) & 1)
#define all(v) v.begin(), v.end()
#define ms(a) memset(a, 0, sizeof(a))
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int main()
{
    faster();
    ll n;
    cin >> n;
    ll a[n];
    for (auto &x : a)
        cin >> x;
    vector<ll> v;
    for (auto &x : a)
    {
        auto idex = upper_bound(all(v), x);
        if (idex == v.end())
            v.push_back(x);
        else
            *idex = x;
    }
    cout << v.size() << endl;
}