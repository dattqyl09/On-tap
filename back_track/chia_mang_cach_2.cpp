#include <bits/stdc++.h>
#define ll long long
const ll mod = (ll)1e9 + 7;
#define endl "\n"
#define all(v) v.begin(), v.end()
#define ms(a) memset(a, 0, sizeof(a))
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
ll n, k, s, ok = 0, ans = 0, a[1000001];
void back_track(ll sum, ll ans, ll begin)
{
    if (ans == k)
    {
        ok++;
    }
    for (ll j = begin; j < n; j++)
    {
        if (sum + a[j] <= s)
        {
            if (sum + a[j] == s)
            {
                back_track(0, ans + 1, j + 1);
            }
            else
            {
                back_track(sum + a[j], ans, j + 1);
            }
        }
    }
}
int main()
{
    faster();
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            s += a[i];
        }
        if (s % k != 0)
        {
            cout << 0 << endl;
        }
        else
        {
            s /= k;
            back_track(0, 0, 0);
            cout << ok << endl;
        }
        s = 0;
    }
}