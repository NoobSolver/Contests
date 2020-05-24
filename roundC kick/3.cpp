#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N = 5E3 + 5;
int a[N];

void solve() {
  ll n;
    cin >> n;
    for(ll i = 0; i < n; i ++)
        cin >> a[i];
    int ans = 0;
    for(ll i = 0; i < n; i ++) {
        double total = 0;
        for(int j = i; j < n; j ++) {
            total += a[j];
            double chkr = total;
            chkr = sqrt(chkr);
            if(chkr == floor(chkr))
                ans ++;
        }
    }
    cout << ans<<"\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  cin >> tt;
  for(int t = 1; t <= tt; ++t) {
    cout << "Case #" << t << ": ";
    solve();
  }   
  return 0;
}
