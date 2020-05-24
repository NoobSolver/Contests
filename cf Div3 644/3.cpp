#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		multiset<int>odd,even;
		for(int i=0;i<n;i++)
		{
			if(a[i]%2==0)
			{
				even.insert(a[i]);
			}
			else
			{
				odd.insert(a[i]);
			}
			
			
		}
		if(odd.size()%2==0 && even.size()%2==0)
		{
			cout<<"YES\n"; continue;
		}
		
		if(odd.size()%2!=0 && even.size()!=0)
		{
			bool ok=false;
			for(auto x: odd)
			{
				if(even.count(x+1) || even.count(x-1))
				{
					ok=true; break;
				}
			}
			cout<<(ok?"YES\n":"NO\n"); continue;
		}
		
	cout<<"NO\n";	
	//	cout<<(can?"YES\n":"NO\n");
	}

	
}
