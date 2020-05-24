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
	int ans[t];
	int val[1000];
	for(int i=0;i<t;i++)
	{
		cin>>ans[i];
		}
	ll dp;
	for(int i=0;i<t;i++)
	{
		memset(val,0,sizeof(val));
		dp=i;
		while(val[dp]!=1)
		{
			val[dp]++;
			dp=ans[dp]-1;
			
		}
		cout<<dp+1<< " ";
	}
	
	
return 0;
}


