#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int w, h, u, d, l, r;
  cin >> w >> h >> l >> u >> r >> d;
  l--, u--, r--, d--;
  swap(w, h);
  vector<vector<double>> dp(h, vector<double>(w, 0));
  dp[0][0] = 1;
  auto can = [&](int x, int y) {
    if(x >= h || y >= w) return false;
    return true;
  };
  for(int i = 0; i < h; ++i) {
    for(int j = 0; j < w; ++j) {
      int moves = 0;
      int x = i, y = j;
      if(x >= l && x <= r && y >= u && y <= d) continue;;
      if(can(i, j + 1)) moves++;
      if(can(i + 1, j)) moves++;
      if(can(i, j + 1)) dp[i][j + 1] += dp[i][j] / moves;
      if(can(i + 1, j)) dp[i + 1][j] += dp[i][j] / moves;
    }
  }
  cout << dp[h - 1][w - 1] << '\n';
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
