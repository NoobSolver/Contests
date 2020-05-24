#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{	int t; cin>>t;
	while(t--)
	{
		int n,k; cin>>n>>k;
		ll a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		ll pref[n+1]={0};
		pref[0]=0;
		pref[1]=0;
		for(int i=1;i<n-1;i++)
		{
			if(a[i]>a[i-1] && a[i]>a[i+1])
			{
				pref[i+1]=pref[i]+1;
			}
			else
			{
				pref[i+1]=pref[i];
			}
		}
		for(int i=0;i<n;i++)
		{
			//cout<<pref[i]<<" ";
		}
		
		int range=k-1;
		ll cur=0;
		ll s;
		for(int i=0;i<=n-k;i++)
		{
			//cout<<range<<" ";
			ll c=pref[range]-pref[i+1];
		//	cout<<c<<" ";
			if(c>cur)
			{
				cur=c;
				s=i+1;
			}
			range++;
		}
		if(cur==0){cout<<1<<" "<<1<<endl;continue;}
		cout<<cur+1<<" "<<s<<endl;
		
	//	if(cur==0){cout<<0<<" "<
		
	}
	

}
