#include<bits/stdc++.h>
 
typedef long long  ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define pb push_back
#define pl push_right
 
using namespace std;
 
		 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;cin>>t;
	while(t--){
	    ll ans=0;
	    ll result;
		ll l;cin>>l;
	 if(l==1){
	  cout<<1<<"\n"<<"\n";
	  continue;
	  }
	
	 else
	  result=l*l*l;
	  ans=result-1;
	  cout<<ans<<"\n"<<"\n";
	}

	
return 0;
}

