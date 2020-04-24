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
    ll n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
     	if((a-b)*n > c+d || (a+b)*n < c-d)
		cout << "No\n";
	else
		cout << "Yes\n";
  }
  return 0;
}



