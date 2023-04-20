#include <bits/stdc++.h>
#define ll long long
#pragma GCC optimize("Ofast")
const ll mod = (ll)1e9 + 7;
#define endl "\n"
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
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (auto &x : a)
        cin >> x;
    sort(a, a + n);
    ll res = 0;
    for (ll i = 0; i < n; i++)
    {
        ll idex = lower_bound(a + i + 1, a + n, k - a[i]) - a - 1;
        cout << idex << endl;
        if (idex > i)
        {
            res += (idex - i - 1) + 1;
        }
    }
    cout << res << endl;
}