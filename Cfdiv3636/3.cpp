#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
int main() 
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		ll a[n];
		int p;
		vector<pair<int,int>>pos,neg;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]<0){neg.push_back({a[i],i});}
			else{pos.push_back({a[i],i});}
		}
		int l=1;
		for(int i=0;i<n-1;i++)
		{
			if(a[i]<0 && a[i+1]>0)
			{
				l++;
			}
		}
		ll need=2*l;
		vector<int>parity;
	ll	 po=0;
	ll mx=0;
			for(int i=0;i<n;i++)
			{
				if(a[i]>0)
				{
					mx=max(mx,a[i]);
				}
				else
				{
					po+=mx;
					mx=0;
				}
			}
			po+=mx;
			mx=INT_MIN;
		//	cout<<po<<" ";
			for(int i=0;i<n;i++)
			{
				if(a[i]<0)
				{
					mx=max(mx,a[i]);
				}
				else
				{
				//	cout<<mx<<" ";
				
					if(mx!=INT_MIN){	po+=mx;}
					mx=INT_MIN;
				}
			}
		//	cout<<mx;
		//cout<<po<<" ";
		if(mx!=INT_MIN){po+=mx;}
			
		cout<<po<<endl;
	
	
	}
}
