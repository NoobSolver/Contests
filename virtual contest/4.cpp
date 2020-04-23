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
   int a,b,c,aa,bb,cc;
		cin>>a>>b>>c;
		int ans = mod;
		for(int i=1;i<=c;i++)
		for(int j=i;j<=2*c;j+=i)
		for(int k=j;k<=2*c;k+=j)
		{
			if(abs(i-a)+abs(j-b)+abs(k-c) < ans)
			{
				ans = abs(i-a)+abs(j-b)+abs(k-c);
				aa = i;
				bb = j;
				cc = k;
			}
		}
		cout<<ans<<'\n'<<aa<<' '<<bb<<' '<<cc<<'\n';
  }
  return 0;
}

