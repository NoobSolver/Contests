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
  int t;
  cin >> t;
  while (t--) {
   int n,m,k;
   cin>>n>>m>>k;
   int ans=n/k;
   if(ans>=m ){
	   
   cout<<m <<"\n";
}
   else{
  m=m-ans;
  int e=m/(k-1);
  int f=m%(k-1);
  if(f==0)
  {
	  cout<<ans-e<<endl;
  }
  else
  {cout<<ans-e-1<<endl;
  }
   
}
   
  }
  return 0;
}


