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
  int i=1;
  while (t--) {
    ll n,b;
    cin >> n>>b;
    int a[1000000];
    for (ll i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n);
    int ans=0;
        for(int i=0;i<n;i++)
    {
		if(b>=a[i]){
		b-=a[i];
		ans++;
		
	}
      
  }
  
  cout<<"Case #"<<i<<":"<<" "<<ans<<"\n";
  i++;
  
}
return 0;
}
