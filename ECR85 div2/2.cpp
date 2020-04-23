#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n,k; cin>>n>>k;
		ll a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n,greater<int>());
		double sm=0;
		int ct=0;
		for(int i=1;i<=n;i++)
		{
			sm+=a[i-1];
			if((double)(sm/i)<k)
			{
				break;
			}
			ct++;
		}
		cout<<ct<<endl;
	}

}

