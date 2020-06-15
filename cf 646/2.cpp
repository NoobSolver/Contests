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
   	string s;
	cin >> s;
	ll n = s.length();
	s = " " + s;
	ll pre[n] = {0};
	for(int i = 1; i <= n; i++)
		pre[i] = pre[i-1] + (s[i] == '1');
	ll mini = min(pre[n], n - pre[n]);
	for(int i = 1; i <= n; i++)
		mini = min(mini, i - pre[i] + pre[n] - pre[i]);
	for(int i = n; i >= 1; i--)
		mini = min(mini, (n - i + 1) - (pre[n] - pre[i-1]) + pre[i-1]);
	cout << mini << endl;	
     	
  }
  return 0;
}





