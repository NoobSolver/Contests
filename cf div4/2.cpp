

#include<bits/stdc++.h>

typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define pb push_back
const ll mod = (ll) 1e9+7;

using namespace std;

int main() {
  IOS
  #ifdef AV
  freopen("int.txt", "r", stdin);
  #endif
  ll q;
  cin >> q;
  while (q--) {
    ll n, K,t;
    cin >> n >> K>>t;
    string str;
    
    ll z1 = 0, z2 = 0;
    ll p = 0, p2 = 0;
    ll k = n;
    for (ll i = 0; i < n; i++) {
      if (str[i] == '1') {
        k = i;
        break;
      }
      z1++;
    }
    for (ll i = k; i < n; i++) {
      if (str[i] == '0') {
        ll d = i-k-z2;
        if (d <= K) {
          K -= d;
          z2++;
        } else {
          p2++;
          p = d-K;
          break;
        }
      }
    }
    string ans;
    ll z = z1+z2+p2;
    for (ll i = 0; i < z1; i++) {
      ans.pb('0');
    }
    for (ll i = 0; i < z2; i++) {
      ans.pb('0');
    }
    for (ll i = 0; i < p; i++) {
      ans.pb('1');
    }
    for (ll i = 0; i < p2; i++) ans.pb('0');
    for (ll i = 0; i < n; i++) {
      if (str[i] == '1') {
        if (p == 0) {
          ans.pb('1');
        } else {
          p--;
        }
      } else {
        if (z == 0) {
          ans.pb('0');
        } else {
          z--;
        }
      }
    }
    cout << ans << endl;
  }
  return 0;
}
