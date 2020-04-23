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
    ll n,k;
    cin >> n>>k;
    int i=1;
    int a[1000];
    for (ll i = 0; i < n; i++) cin >> a[i];
      int l=1;
      int rb=a[n-1]-a[0];
      while(l<rb)
      {
		  int mb=(l+rb)/2;
		  int k2=0;
		  for(ll i=1;i<n;i++)
		  {
			  int d=a[i]-a[i-1];
			  //ceil(d/n+1)<=mb;
			  //d<=mb*(n+1)
			  
			  k2+=(d+mb-1)/mb-1;
			  
		  }
		  if(k2<=k)
		  rb=mb;
		  else
		  l=mb+1;
		  
      
      
      
      
      
      
      
      
  }
      
 cout<<"Case #"<<i<<":"<<" "<<l<<"\n";
  i++;
   
  }
  return 0;
}

