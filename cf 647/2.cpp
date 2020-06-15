#include<bits/stdc++.h>
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define pb push_back
const ll mod = (ll) 1e9+7;
 
using namespace std;
 
int main() {
  IOS
  #ifdef gm
  freopen("int.txt", "r", stdin);
  #endif
  ll t;
  cin >> t;
  while (t--) {
       int n;
    cin >> n;
    vector<int> vc(n);
    for (int i = 0; i < n; i++) cin >> vc[i];
    sort(vc.begin(), vc.end());
    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
      int p = vc[i] ^ vc[0];
      if (p == 0) continue;
      vector<int> arr;
      for (int j = 0; j < n; j++) {
        arr.pb(vc[j] ^ p);
      }
      sort(arr.begin(), arr.end());
      if (arr == vc) {
        ans = min(ans, p);
      }
    }
    ans == INT_MAX ? cout << "-1" : cout << ans;
    cout << endl;
}
 return 0;    	
  }
  







