#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const ll mod = 1e9;

void solve() {
  ll r,c;cin>>r>>c;
  for(int i=0;i<=r;i++)
  {
 string s = "";
  cin >> s;
  
    
}
  ll x = 0, y = 0;
  auto add = [&](char c, ll f) {
    f %= mod;
    x %= mod;
    y %= mod;
    if(c == 'S') y = (y + f) % mod;
    if(c == 'N') y = (y - f + mod) % mod;
    if(c == 'W') x = (x - f + mod) % mod;
    if(c == 'E') x = (x + f) % mod;
  };
  for(char c: "NEWS") {
    stack<ll> S;
    S.push(1);
    for(int i = 0; i < (int) s.length(); ++i) {
      if(s[i] >= '2' && s[i] <= '9') {
        S.push((S.top() * int(s[i] - '0') % mod));
        i++;
      } else {
        if(s[i] == c) {
          add(c, S.top());
        } else {
          //assert(s[i] == ')');
          if(s[i] == ')')S.pop();
        }
      }
    } 
  }
  cout << x + 1 << ' ' << y + 1 << '\n';
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
