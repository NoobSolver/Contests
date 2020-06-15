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
  ll ans;
  while (t--) {
	  	int n; cin >> n;
	vector<int> ar(n);
	vector<int> a(2, 0);
	for(int &i: ar) {
		cin >> i;
	}
	for(int i = 0; i < n; ++i) {
		int x; cin >> x;
		a[x]++;
	}
	if(a[0] && a[1]) {
		cout << "Yes\n";
		return;
	}
	for(int i = 1; i < n; ++i) {
		if(ar[i - 1] > ar[i]) {
			cout << "No\n";
			return;
		}
	}
	cout << "Yes\n";
   	
}

 

 return 0;    	
  }
  








