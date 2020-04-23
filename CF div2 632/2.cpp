#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		int a[n],b[n];
		map<int,int>mp;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			mp[a[i]]++;
		}
		bool ok=true;
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		if(a[0]!=b[0]){cout<<"NO\n"; continue;}
		for(int i=n-1;i>=0;i--)
		{
			mp[a[i]]--;
			if(a[i]!=b[i])
			{
			//	mp[a[i]]--;
				if(a[i]>b[i])
				{
					if(mp[-1]>0)
					{
					//	mp[-1]--;
					//	mp[b[i]]++;
					}
					else if(mp[b[i]-a[i]]>0)
					{
					//	mp[b[i]-a[i]]--;
					//	mp[b[i]]++;
					}
					else
					{
						ok=false; break;
					}
				}
				else if(a[i]<b[i])
				{
				//	cout<<"in";
					if(mp[1]>0)
					{
					//	cout<<"in";
					//	mp[1]--;
					//	mp[b[i]]++;
					}
					else if(mp[b[i]-a[i]]>0)
					{
					//	mp[a[i]-b[i]]--;
					//	mp[b[i]]++;
					}
					else
					{
						ok=false; break;
					}
					}
				}
			
			}
		
		cout<<(ok?"YES\n":"NO\n");
		
	}
	
	
}
