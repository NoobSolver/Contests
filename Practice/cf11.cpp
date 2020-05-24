#include<bits/stdc++.h>
 
typedef long  double ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define pb push_back
#define pl push_right
 
using namespace std;
 
		 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.precision(10);
	cout<<fixed;
	int t;cin>>t;
	while(t--){
		int n;
    cin >> n ;
    vector<int> ar(n);
  
    for(int &x: ar) cin >> x;
    vector<int>mx(n+1,INT_MIN),mn(n+1,INT_MAX);
   
    for(int i=0;i<n;i++)
    {
		mx[ar[i]]= max(mx[ar[i]],i);
		mn[ar[i]]= min(mn[ar[i]],i);
	}
	
  bool ok = false;
    for(int i = 1; i <= n; ++i) {
     
     if(mx[i]==INT_MIN && mn[i]==INT_MAX) continue;
		 if(mx[i]-mn[i]>1)
		 {
	     ok=true;
		 break;
	 }
	 }
    
   if(ok)
   cout<<"Yes\n";
   else
   cout<<"No\n";
  }
	
return 0;
}


