#include<bits/stdc++.h>
 
typedef long  long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define pb push_back
#define pl push_right
 
using namespace std;
 
		 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	ll t;cin>>t;
	while(t--){
   string s;
   cin>>s;
   ll n=s.length();
   s.insert(s.begin(),'R');
   s.pb('R');
   ll ans=0;
   ll val=0;
   for(int i=1;i<s.length();i++)
   {
	   if(s[i]=='R')
	   {
	 ans=max(ans,i-val);
	 val=i;
   }
   }
   cout<<ans<<endl;
	}
return 0;
}


