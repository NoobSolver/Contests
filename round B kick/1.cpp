#include<bits/stdc++.h>
 
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define pb push_back
const ll mod = (ll) 1e9+7;
 
using namespace std;
void solve() {
  int n; cin >> n;
  vector<int> ar(n);
  int res = 0;
  for(int &i: ar) cin >> i;
  for(int i = 1; i < n - 1; ++i) {
    if(ar[i] > max(ar[i - 1], ar[i + 1])) res++;
  }
  cout << res << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  cin >> tt;
  for(int t = 1; t <= tt; ++t) {
    cout<<"Case #" << t << ": ";
    solve();
  }   
  return 0;
}
