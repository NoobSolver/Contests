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
  cin >> t;int i=1;
  while (t--) {
    ll n,k,p;
    cin >> n>>k>>p;
    int ar[1000][1000];
    int dp[51][50];
    memset(ar,0,sizeof(dp));
    dp[0][0]=0;
    for(int i=0;i<n;i++){
		memcpy(dp[i+1],dp[i],sizeof(dp[0]));
		for(int j=0,s=0;j<k;j++)
		{
			cin>>ar[i][j];
			s+=ar[i][j];
			for(int l=0;l+j+1<=p;l++)
			dp[i+1][l+j+1]=max(dp[i][l]+s,dp[i+1][l+j+1]);
		}}
		
     cout<<"Case #"<<i<<":"<<" "<<dp[n][p]<<"\n";
  i++;
   
   
  }
  return 0;
}

