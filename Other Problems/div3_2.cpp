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
		string s;
		cin >> s;
		string a, b;
		int flag = 0;
		for(int i=0;i<n;i++) {
			if (i == 0) {
				a.push_back('1');
				b.push_back('1');
				continue;
			}
			if (s[i] == '2') {
				if (flag == 0) {
					a.push_back('1');
					b.push_back('1');
				} else {
					a.push_back('0');
					b.push_back('2');
				}
			} else if (s[i] == '1') {
				if (flag == 0) {
					a.push_back('1');
					b.push_back('0');
					flag = 1;
				} else {
					a.push_back('0');
					b.push_back('1');
				}
			} else {
				a.push_back('0');
				b.push_back('0');
			}
		}
		cout << a << '\n' << b << '\n';
  
  }
  return 0;
}

