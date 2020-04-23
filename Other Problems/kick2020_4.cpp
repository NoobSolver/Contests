#include<bits/stdc++.h>
 
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define pb push_back
const ll mod = (ll) 1e9+7;
 
using namespace std;
int c[20000001][26],m,cnt[20000001];
ll ans;ll n,k;
 void dfs(int u=0,int d=0)
 {
	 for(int v=0;v<26;v++)
	 if(c[u][v])
	 dfs(c[u][v],d+1) ,cnt[u]+= cnt[c[u][v]];
	 while(cnt[u]>=k){
	 cnt[u]-=k;
	 ans+=d;}
 }
	 
 
int main() {
  IOS
  #ifdef gm
  freopen("int.txt", "r", stdin);
  #endif
  ll t;
  cin >> t; int i=1;
  while (t--) {
    
    cin >> n>>k;
   
    
    for (ll i = 0; i < n; i++)
    {
		string s;cin>>s;
		int u=0;
		for(char d:s)
		{if(!c[u][d]-'A')
			c[u][d]-'A'= m++;
			u=c[u][d]-'A';
		}
		++cnt[u];
		}
		memset(c,0,m=sizeof(c[0]));
		memset(cnt,0,m*4);
		ans=0;
		dfs();
		
     
		  

      
      
      
      
  }
      
 cout<<"Case #"<<i<<":"<<" "<<ans<<"\n";
  i++;
   
  
  return 0;
}

