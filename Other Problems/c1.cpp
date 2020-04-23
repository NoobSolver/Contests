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
    ll n;
    cin >> n;
    bool foo = false;
    ll ans = -1;
    for(ll i = 0; i < n; i++) {
    	ll tp;
    	cin >> tp;
    	if(tp%2 == 0) {
    		foo = true;
    		ans = i + 1;
    	}
    }
    if(foo) {
    	cout << 1 << endl;
    	cout << ans << endl;
    	continue;
    }
    if(n == 1) {
    	cout << -1 << endl;
    	continue;
    }
    cout << 2 << endl;
    cout << 1 << " " << 2 << endl << endl;
  }
  return 0;
}
