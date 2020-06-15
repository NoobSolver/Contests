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
  int t;
  cin >> t;
  while (t--) {
     int n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<string> vc(n);
    for (int i = 0; i < n; i++) cin >> vc[i];
    for (int i = 0; i < n; i++) vc[i].pb('*');
    int ans = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (vc[i][j] == '*') continue;
        if (vc[i][j] == vc[i][j + 1]) {
          if (2 * x <= y) {
            ans += 2 * x;
          } else {
            ans += y;
          }
          vc[i][j] = vc[i][j + 1] = '*';
        } else vc[i][j] = '*', ans += x;
      }
    }
    cout << ans << endl;
   
  }
  return 0;
}
//



