#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
  ll n; ll k;
  cin >> n >> k;
  vector<ll> A(n);
  for(auto &x: A) cin >> x;
  for(int i = 0; i < n;) {
    if(ar[i] == k) {
      int x = k;
      while(i < n && ar[i] == x) {
        i++, x--;
      }
      if(x == 0) res++;
    } else i++;
  }
  cout << res << '\n';
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
