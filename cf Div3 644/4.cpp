
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{
	int t; cin>>t;
	while(t--)
	{
		ll n,k; cin>>n>>k;
		vector<ll>div;
		div.push_back(n);
		for(ll i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
				div.push_back(i);
				if(n/i!=i)
				{
					div.push_back(n/i);
				}
				
			}
		}
		sort(div.begin(),div.end());
		reverse(div.begin(),div.end());
		//cout<<div[0]
		ll ans=n;
		for(ll i=0;i<div.size();i++)
		{
			if(div[i]<=k)
			{
				ans=n/div[i]; break;
			}
		}
	
	cout<<ans<<endl;
	}

	
}
