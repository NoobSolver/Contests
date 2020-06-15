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
   cin>>n;
   
   ll p=n&( ~ (n-1));
   n=n/p;
   n=n/2;
   cout<<n<<"\n";
	 
	}
   	
 return 0;    	
}
  










