#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

#include <iostream>

using namespace std;

typedef long long ll;

void dfs(ll l, ll r, ll k, ll &ans) {
    ll len = r - l + 1;
    if (len < k) return;

    if (len % 2 == 0) {
        ll mid = (l + r) / 2;
        dfs(l, mid, k, ans);
        dfs(mid + 1, r, k, ans);
    } else {
        ll mid = (l + r) / 2;
        ans += mid;
        dfs(l, mid - 1, k, ans);
        dfs(mid + 1, r, k, ans);
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;
        ll ans = 0;
        dfs(1, n, k, ans);
        cout << ans << '\n';
    }

    return 0;
}
